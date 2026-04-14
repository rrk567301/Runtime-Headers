@class NSData, NSMutableDictionary;

@interface LAUIAuthorizationSheetOptionsBuilder : NSObject {
    NSData *_authRef;
    NSMutableDictionary *_authEnv;
}

- (void).cxx_destruct;
- (id)build;
- (id /* block */)authRef;
- (id /* block */)authEnvVar;

@end
