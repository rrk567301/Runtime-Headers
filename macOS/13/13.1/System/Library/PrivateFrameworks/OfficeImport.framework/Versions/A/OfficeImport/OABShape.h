@interface OABShape : NSObject

+ (id)readShapeFromBinary:(id)a0 state:(id)a1;
+ (id)readShapeFromXml:(id)a0 state:(id)a1;
+ (id)readShape:(id)a0 state:(id)a1;
+ (void)readGraphicDefaults:(id)a0 to:(id)a1 state:(id)a2;

@end
