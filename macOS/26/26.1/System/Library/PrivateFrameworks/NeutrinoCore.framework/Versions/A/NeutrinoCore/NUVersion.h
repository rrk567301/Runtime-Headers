@class NSString;

@interface NUVersion : NSObject

@property (readonly) long long major;
@property (readonly) long long minor;
@property (readonly) NSString *stringRepresentation;

+ (id)versionWithPackedUInt32:(unsigned int)a0;
+ (BOOL)validateVersionString:(id)a0 major:(long long *)a1 minor:(long long *)a2;
+ (id)regularExpression;
+ (id)versionZero;
+ (BOOL)validateVersionString:(id)a0;
+ (id)versionOne;
+ (id)versionWithString:(id)a0;

- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)isCompatibleWithVersion:(id)a0;
- (id)description;
- (BOOL)atLeastMajor:(long long)a0 minor:(long long)a1;
- (BOOL)isEqualToVersion:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithMajor:(long long)a0 minor:(long long)a1;
- (id)init;

@end
