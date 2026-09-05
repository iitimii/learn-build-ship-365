- Set up the project structure for the llm inference engine using CMake https://github.com/iitimii/llm-engine/commit/4c142f60eff646fedb4ca62d9659e16fe9970090

- learnt why cmake is used, to handle building of large c++ projects
- learnt stuff like targets, compiler options, executable
- I still find PRIVATE, PUBLIC, INTERFACE settings confusing. PRIVATE only gives target access to what's being linked, PUBLIC gives access to both target and dependants of target, INTERFACE gives access to only dependants of target and not the target itself.
- built the llm cli executable. for now it just gets the version of the engine