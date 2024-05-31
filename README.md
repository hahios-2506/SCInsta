# SCInsta
A feature-rich tweak for Instagram on iOS!\
`Version v0.4.1` | `Tested on Instagram v330.0.0`

---

> [!NOTE]
> ❓ &nbsp;If you have any questions or need help with the tweak, visit the [Discussions](https://github.com/SoCuul/SCInsta/discussions) tab
>
> ✨ &nbsp;If you have a feature request, [click here](https://github.com/SoCuul/SCInsta/issues/new?labels=enhancement&title=feat:%20replace%20this%20text%20with%20your%20feature%20request)\
> 🐛 &nbsp;If you have a bug report, [click here](https://github.com/SoCuul/SCInsta/issues/new?labels=bug&title=bug:%20replace%20this%20with%20a%20summary%20of%20the%20issue%20you're%20experiencing)
> 

---

# Features
### General
- Hide Meta AI
- Copy description
- Hide reels tab
- Do not save recent searches
- Hide explore posts grid
- Hide trending searches
- No suggested chats (in dms)

### Feed
- Hide ads
- Hide stories tray
- No suggested posts
- No suggested for you (accounts)
- No suggested reels
- No suggested threads posts

### Confirm actions
- Confirm like: Posts
- Confirm like: Reels
- Confirm follow
- Confirm call
- Confirm voice messages
- Confirm sticker interaction
- Confirm posting comment

### Save media (partially broken)
- Download images/videos
- Save profile image

### Story and messages
- Keep deleted message
- Unlimited replay of direct stories
- Disabling sending read receipts
- Remove screenshot alert
- Disable story seen receipt

### Security
- Padlock (require biometric authentication to open the app)

### Optimization
- Automatically clears unneeded cache folders, reducing the size of your Instagram installation

### Built-in Tweak Settings
> Long press on the **large Instagram logo** at the top of your feed to bring up the SCInsta tweak settings

# Building
## Prerequisites
- XCode + Command-Line Developer Tools
- [Homebrew](https://brew.sh/#install)
- [CMake](https://formulae.brew.sh/formula/cmake#default) (`brew install cmake`)
- [Theos](https://theos.dev/docs/installation)
- [pyzule](https://github.com/asdfzxcvbn/pyzule?tab=readme-ov-file#installation) **\*only required for sideloading**

## Setup
1. Install iOS 14.5 frameworks for theos
   1. [Click to download iOS SDKs](https://github.com/xybp888/iOS-SDKs/archive/refs/heads/master.zip)
   2. Unzip, then copy the `iPhoneOS14.5.sdk` folder into `~/theos/sdks`
2. Clone SCInsta repo from GitHub: `git clone --recurse-submodules https://github.com/SoCuul/SCInsta --branch v0.4.1`
3. **For sideloading**: Download a decrypted Instagram IPA from a trusted source, making sure to rename it to `com.burbn.instagram.ipa`.
   Then create a folder called `packages` inside of the `SCInsta` folder, and move the Instagram IPA file into it. 

## Run build script
```sh
$ chmod +x build.sh
$ ./build.sh <sideload/rootless/rootful>
```

## Sideloading
After building the tweak for sideloading, you can install the tweaked IPA file like any other sideloaded iOS app. If you have not done this before, here are some suggestions to get started.

- [AltStore](https://altstore.io/#Downloads) (Free, No notifications*) *Notifications require $99/year Apple Developer Program
- [Sideloadly](https://sideloadly.io/#download) (Free, No notifications*) *Notifications require $99/year Apple Developer Program
- [Signulous](https://www.signulous.com/register) ($19.99/year, Receives notifications)
- [UDID Registrations](https://www.udidregistrations.com/buy) ($9.99/year, Receives notifications)

# In-App Screenshots

|                                             |                                             |                                             |
|:-------------------------------------------:|:-------------------------------------------:|:-------------------------------------------:|
| <img src="https://i.imgur.com/AIAzNuR.png"> | <img src="https://i.imgur.com/CDdWQaD.png"> | <img src="https://i.imgur.com/Pm6xYCA.png"> |
| <img src="https://i.imgur.com/XROKmKf.png"> |

# Contributing
Contributions to this tweak are greatly appreciated. Feel free to create a pull request if you would like to contribute.

If you do not have the technical knowledge to contribute to the codebase, improvements to the documentation are always welcome!

# Support the project
SCInsta takes a lot of time to develop, as the Instagram app is ever-changing and difficult to keep up with. Additionally, I'm still a student which doesn't leave me much time to work on this tweak.

If you'd like to support my work, you can donate to my [ko-fi page](https://ko-fi.com/socuul)!\
There's many other ways to support this project however, by simply sharing a link to this tweak with others who would like it!

Seeing people use this tweak is what keeps me motivated to keep working on it ❤️

# Credits
- Huge thanks to [@BandarHL](https://github.com/BandarHL) for creating the original BHInstagram/BHInsta project, which SCInsta is based upon.
