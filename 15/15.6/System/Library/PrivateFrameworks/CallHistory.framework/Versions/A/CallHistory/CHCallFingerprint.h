@interface CHCallFingerprint : NSObject

+ (char)doCallTypesMatch:(id)a0 :(id)a1;
+ (char)doHandlesMatch:(id)a0 with:(id)a1;
+ (char)doesCall:(id)a0 matchWith:(id)a1;
+ (id)matchCallWithFingerprint:(id)a0 usingDatabase:(id)a1;
+ (id)predicateForCall:(id)a0;
+ (id)predicateForHandoffCall:(id)a0;
+ (char)shouldCall:(id)a0 updateMatchingCall:(id)a1;
+ (id)updateCall:(id)a0 withFingerprintedCall:(id)a1;

@end
