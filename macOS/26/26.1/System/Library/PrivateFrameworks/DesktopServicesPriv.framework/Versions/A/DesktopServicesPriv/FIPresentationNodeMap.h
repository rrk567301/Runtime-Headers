@class NSMapTable;

@interface FIPresentationNodeMap : NSObject {
    NSMapTable *_lookupTable;
}

+ (void)finalize;
+ (id)shared;
+ (id)presentationNodeForKeyNode:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)presentationNodeForKeyNode:(id)a0;
- (void)registerPresentationNode:(id)a0 forNode:(id)a1;
- (void)registerPresentationNode:(id)a0 forNode:(id)a1 clearOlderKeyNodes:(BOOL)a2;
- (void)unregisterAllForPresentationNode:(id)a0;
- (void)unregisterKeyNode:(id)a0;

@end
