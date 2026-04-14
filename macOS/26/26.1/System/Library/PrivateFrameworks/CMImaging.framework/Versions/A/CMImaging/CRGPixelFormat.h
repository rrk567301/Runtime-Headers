@class CRGDerivedPixelFormat, CRGExplicitPixelFormat;

@interface CRGPixelFormat : NSObject

@property (readonly, nonatomic) CRGExplicitPixelFormat *asExplicit;
@property (readonly, nonatomic) CRGDerivedPixelFormat *asDerived;

- (id)initPrivate;

@end
