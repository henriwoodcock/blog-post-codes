---
title: Projects
permalink: /projects/
---

{% for project in site.projects %}
  <h2>
    <a href="{{ project.url }}">
      {{ project.title }}
      </a>
  </h2>
  <p>{{ project.description }}</p>
{% endfor %}
