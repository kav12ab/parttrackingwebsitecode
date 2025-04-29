# Part Tracking Front-End Website Code

## Accessble here: [Part Tracking Web App](https://logistics-parts-tracking.web.app/)

Owner: **Kaveesha Abeysundara** (SID: 201578163)    

Project: **Automated Tracking of Assembly Line-Side Flow Rack Parts**   

School of Mechanical Engineering   
University of Leeds  
LS2 9JT

Static web dashboard for real-time flow rack part tracking, using Firebase Realtime Database.

[![License: All Rights Reserved](https://img.shields.io/badge/License-All%20Rights%20Reserved-red.svg)](LICENSE.md) <!-- Optional: You can create a LICENSE.md file -->

## Table of Contents

- [About](#about)
- [Files](#files)
- [Usage](#usage)
- [Configuration](#configuration)
- [Dependencies](#dependencies)
- [Repository Structure](#repository-structure)
- [License](#license)
- [Contact](#contact)

## About

This repository hosts a single-page dashboard (`index.html`) and accompanying logo (`logo.png`). The dashboard connects to a Firebase Realtime Database to display live part counts, sensor statuses, and rack configurations for Bentley Motors’ flow rack tracking system.

## Files

| File        | Purpose                                                                            |
|-------------|------------------------------------------------------------------------------------|
| `index.html`| Main HTML page with embedded CSS and JavaScript to fetch and render Firebase data. |
| `logo.png`  | Bentley Motors logo displayed in the header of the dashboard.                      |

## Usage

1. Clone or download the repository:
   ```bash
   git clone https://github.com/kav12ab/parttrackingwebsitecode.git
   cd parttrackingwebsitecode
   ```
2. Open `index.html` in any modern web browser.
3. Ensure the browser has internet access to reach Firebase endpoints.

## Configuration

- The Firebase project settings (API key, database URL, etc.) are defined directly in the `<script>` block at the top of `index.html` in the `firebaseConfig` object.
- To point to a different Firebase project, edit those values in `index.html`.

## Dependencies

- [Firebase JS SDK (compat)](https://www.gstatic.com/firebasejs/) loaded via `<script>` tags.  
- Google Fonts for typography.

## Deployment

This dashboard can be hosted either locally or on Firebase Hosting (recommended).

### Firebase Hosting
1. Install the Firebase CLI (if not already installed):
   ```bash
   npm install -g firebase-tools
   ```
2. Log in to Firebase:
   ```bash
   firebase login
   ```
3. Initialize Hosting in the project folder (select your Firebase project, set `public` directory to `./`, configure as a single-page app if prompted):
   ```bash
   firebase init hosting
   ```
4. Deploy to your Firebase project:
   ```bash
   firebase deploy --only hosting
   ```
5. Access your dashboard at:
   ```
   https://<your-project>.web.app
   ```

## Repository Structure

```plaintext
parttrackingwebsitecode/
├── index.html   # Dashboard page (HTML, CSS, JS)
└── logo.png     # Logo asset displayed in header
```

## License

**All rights reserved.**

This dashboard and its assets are proprietary. No part may be copied, modified, or distributed without explicit permission.

## Contact

**Author:** Kaveesha Abeysundara (SID: 201578163)  


Report issues or feature requests at [https://github.com/kav12ab/parttrackingwebsitecode/issues](https://github.com/kav12ab/parttrackingwebsitecode/issues).

