@class NSExtensionContext, NSMapTable;

@interface _SFSafariExtensionContextManager : NSObject {
    NSMapTable *_contexts;
}

@property (readonly, nonatomic) NSExtensionContext *mostRecentContext;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)addContext:(id)a0;

@end
