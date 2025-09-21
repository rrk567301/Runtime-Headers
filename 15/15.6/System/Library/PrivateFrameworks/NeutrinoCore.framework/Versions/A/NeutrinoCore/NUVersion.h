@class NSString;

@interface NUVersion : NSObject

@property (readonly) long long major;
@property (readonly) long long minor;
@property (readonly) NSString *stringRepresentation;

+ (id)regularExpression;
+ (char)validateVersionString:(id)a0;
+ (char)validateVersionString:(id)a0 major:(long long *)a1 minor:(long long *)a2;
+ (id)versionOne;
+ (id)versionWithPackedUInt32:(unsigned int)a0;
+ (id)versionWithString:(id)a0;
+ (id)versionZero;

- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (char)isEqualToVersion:(id)a0;
- (char)atLeastMajor:(long long)a0 minor:(long long)a1;
- (id)initWithMajor:(long long)a0 minor:(long long)a1;
- (char)isCompatibleWithVersion:(id)a0;

@end
