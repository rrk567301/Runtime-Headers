@class NSMutableSet, NSMutableDictionary;

@interface IFSessionState : NSObject {
    char _debugging;
    NSMutableSet *_launchServicesPaths;
    NSMutableSet *_newPaths;
    NSMutableDictionary *_idToPath;
}

- (void)dealloc;
- (id)portName;
- (char)debuggingEnabled;
- (void)setDebuggingEnabled:(char)a0;
- (id)componentIdsWithPath;
- (id)launchServicesPaths;
- (id)newPaths;
- (void)noteComponentId:(id)a0 withPath:(id)a1;
- (void)notePathsForLaunchServicesRegistration:(id)a0;

@end
