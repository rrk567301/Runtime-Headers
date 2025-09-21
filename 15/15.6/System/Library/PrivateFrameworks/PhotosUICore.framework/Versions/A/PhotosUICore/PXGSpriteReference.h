@class PXGLayout, NSString;

@interface PXGSpriteReference : NSObject <PXGSpriteIndexReferencing>

@property (nonatomic) unsigned int spriteIndex;
@property (nonatomic) long long layoutVersion;
@property (weak, nonatomic) PXGLayout *layout;
@property (nonatomic) char isDynamic;
@property (readonly, nonatomic) char isValid;
@property (retain, nonatomic) id objectReference;
@property (readonly, nonatomic) char hasObjectReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)a0 appliedToLayout:(id)a1;

@end
