@class NSString;

@interface NUVersion : NSObject

@property (readonly) long long major;
@property (readonly) long long minor;
@property (readonly) NSString *stringRepresentation;

+ (id)regularExpression;
+ (BOOL)validateVersionString:(id)a0 major:(long long *)a1 minor:(long long *)a2;
+ (id)versionOne;
+ (BOOL)validateVersionString:(id)a0;
+ (id)versionZero;
+ (id)versionWithString:(id)a0;
+ (id)versionWithPackedUInt32:(unsigned int)a0;

- (BOOL)atLeastMajor:(long long)a0 minor:(long long)a1;
- (id)debugDescription;
- (id)description;
- (BOOL)isCompatibleWithVersion:(id)a0;
- (id)init;
- (long long)compare:(id)a0;
- (id)initWithMajor:(long long)a0 minor:(long long)a1;
- (BOOL)isEqualToVersion:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
