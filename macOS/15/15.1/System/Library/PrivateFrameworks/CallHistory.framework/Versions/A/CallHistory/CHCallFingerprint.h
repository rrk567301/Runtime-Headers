@interface CHCallFingerprint : NSObject

+ (BOOL)doCallTypesMatch:(id)a0 :(id)a1;
+ (BOOL)doHandlesMatch:(id)a0 with:(id)a1;
+ (BOOL)doesCall:(id)a0 matchWith:(id)a1;
+ (id)matchCallWithFingerprint:(id)a0 usingDatabase:(id)a1;

@end
