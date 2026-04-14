@interface MessageProtection.TetraVersions : NSObject

+ (BOOL)isTetraNoRatchetCompatibleWith:(unsigned int)a0;
+ (unsigned int)currentTetraVersion;
+ (BOOL)isWireCompatibleWith:(unsigned int)a0;

- (id)init;

@end
