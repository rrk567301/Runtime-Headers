@class NSSet, NSMutableDictionary, CAContext;
@protocol UISSlotDrawer;

@interface UISSlotMachine : NSObject {
    id<UISSlotDrawer> _slotDrawer;
    unsigned long long _options;
    NSMutableDictionary *_cachedContents;
    CAContext *_layerContext;
}

@property (readonly, nonatomic) NSSet *allTags;

- (void).cxx_destruct;
- (id)initWithSlotDrawer:(id)a0 options:(unsigned long long)a1;
- (id)remoteContentForLayerContextWithId:(unsigned long long)a0 style:(id)a1 tag:(id)a2;
- (void)removeContentForStyle:(id)a0 tag:(id)a1;
- (void)removeContentsForTag:(id)a0;

@end
