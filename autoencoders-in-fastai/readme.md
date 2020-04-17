# Autoencoders in fastai
This the folder corresponding to my blog post about creating autoencoders in [fastai](https://docs.fast.ai) and [pytorch](https://pytorch.org).

## Motivation
Fastai provides researchers with techniques which allow the training method to not just be simple and quick but also keep up with modern best practices. This post was created to help readers understand the basics to creating autoencoders in fastai. This can allow them to help push further development in autoencoders.

## Introduction
For a more in depth explanation read me my blog post [here] or on medium [here].

The provided notebook gives an overview of how to implement an autoencoder in fastai (and pytorch). The blog posts mainly focuses on image data, however the notebook gives a class which allows this to be applied to any array based dataset (this could be tabular or even images as well) through creating a custom fastai dataset.

This notebooks shows how to quickly setup and train an autoencoder on the [Cifar10](https://www.cs.toronto.edu/~kriz/cifar.html) dataset. This dataset contains 60000 32 by 32 images which are assigned to 10 classes. In my example I use a subset of this dataset.

## Notebook
The notebook is available [here](autoencoders-in-fastai.ipynb) and can be downloaded directly from github.

## Results
This results of this autoencoder can be seen below

![screenshot of results]("images/training_show_results.png")

The above is achieved on just 10 epochs. These results mainly are achievable from being able to utilise the training methods available in fastai. The results can easily be improved by implementing modern practices into the autoencoder archiecture.

## Installation
This next section will recover the requirements which are necessary to be able to run this notebook yourself.

### Data
The data is from the [Cifar10](https://www.cs.toronto.edu/~kriz/cifar.html) dataset. The folder structure is like such:

```
├── data
│   ├── train
│   │   ├── folder for each class containing images
│   ├── valid
└── └── └── folder for each class containing images
```

### Python
The notebook is a Jupyter Notebook. For installation see [here](https://jupyter.readthedocs.io/en/latest/install.html).

The following python packages are required:
- fastai
- torch
- numpy
- pandas

and all their dependencies.

The safest way to install these will be with [anaconda](https://anaconda.org), this is done with:
```
conda install fastai
```
for example.

## License
MIT License

MIT © 2020 [henri](henriwoodcock.github.io)
