@class CRGDerivedDimensions, CRGExplicitDimensions;

@interface CRGDimensions : NSObject

@property (readonly, nonatomic) CRGExplicitDimensions *asExplicit;
@property (readonly, nonatomic) CRGDerivedDimensions *asDerived;

- (id)initPrivate;

@end
