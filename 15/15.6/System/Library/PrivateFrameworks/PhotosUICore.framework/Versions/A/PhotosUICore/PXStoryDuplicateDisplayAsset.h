@class NSString;
@protocol PXDisplayAsset;

@interface PXStoryDuplicateDisplayAsset : NSObject <PXStoryAssetAlternateIdentifiable>

@property (readonly, nonatomic) id<PXDisplayAsset> displayAsset;
@property (readonly, nonatomic) NSString *alternateUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)conformsToProtocol:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (char)isEqual:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithDisplayAsset:(id)a0 alternateUUID:(id)a1;
- (id)px_storyResourceDisplayAsset;

@end
