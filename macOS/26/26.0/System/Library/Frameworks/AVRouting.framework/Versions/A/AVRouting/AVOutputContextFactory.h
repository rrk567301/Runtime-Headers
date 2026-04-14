@class NSLock, NSMapTable;

@interface AVOutputContextFactory : NSObject {
    NSLock *_weakContextLock;
    NSMapTable *_weakContexts;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)outputContextForContextID:(id)a0;
- (void)setOutputContext:(id)a0 forContextID:(id)a1;

@end
