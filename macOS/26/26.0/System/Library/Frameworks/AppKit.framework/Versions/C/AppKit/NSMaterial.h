@interface NSMaterial : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ _material;
}

@property (class, nonatomic, readonly) NSMaterial *regularMaterial;
@property (class, nonatomic, readonly) NSMaterial *thickMaterial;
@property (class, nonatomic, readonly) NSMaterial *thinMaterial;
@property (class, nonatomic, readonly) NSMaterial *ultraThinMaterial;
@property (class, nonatomic, readonly) NSMaterial *ultraThickMaterial;
@property (class, nonatomic, readonly) NSMaterial *pinchedMaterial;
@property (class, nonatomic, readonly) NSMaterial *selectedMaterial;
@property (class, nonatomic, readonly) NSMaterial *disabledMaterial;
@property (class, nonatomic, readonly) NSMaterial *windowFillMaterial;
@property (class, nonatomic, readonly) NSMaterial *barMaterial;
@property (class, nonatomic, readonly) NSMaterial *glassMaterial;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)makeOrUpdateLayer:(id *)a0;

@end
