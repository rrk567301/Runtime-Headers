@interface MessageProtection.TetraVersions : NSObject

+ (unsigned int)currentTetraVersion;
+ (char)isWireCompatibleWith:(unsigned int)a0;

- (id)init;

@end
