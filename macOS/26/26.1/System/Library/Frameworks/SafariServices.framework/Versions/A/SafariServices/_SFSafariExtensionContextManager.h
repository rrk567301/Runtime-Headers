@class NSMutableDictionary, SFSafariExtensionContext;

@interface _SFSafariExtensionContextManager : NSObject {
    NSMutableDictionary *_contexts;
    SFSafariExtensionContext *_mostRecentContext;
    SFSafariExtensionContext *_currentContext;
}

@property (readonly, nonatomic) SFSafariExtensionContext *currentContext;

+ (id)sharedManager;

- (void)addContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_mostRecentContext;
- (id)bestContextForKnownContext:(id)a0;
- (void)setContext:(id)a0 forBlock:(id /* block */)a1;

@end
