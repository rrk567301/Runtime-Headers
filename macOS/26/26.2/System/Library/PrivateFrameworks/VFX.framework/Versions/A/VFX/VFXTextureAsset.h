@class NSString, VFXWorld;

@interface VFXTextureAsset : VFXFileAsset <VFXWorldReference, VFXReferenceEnumerable>

@property (readonly, nonatomic) struct __CFXWorld { } *worldRef;
@property (readonly, nonatomic) VFXWorld *world;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_forceSynchronousLoading;

@end
