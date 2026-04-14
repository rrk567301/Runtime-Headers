@interface RSValidation : NSObject

+ (BOOL)checkSurfaceUuidIsUnique:(id)a0;
+ (BOOL)checkParentIdentifierIsValid:(id)a0;
+ (BOOL)checkChildNodeGeometryConstraint:(id)a0;
+ (BOOL)validateFloorPlan:(id)a0;

@end
