@class NSString;

@interface NUVersion : NSObject

@property (readonly) long long major;
@property (readonly) long long minor;
@property (readonly) NSString *stringRepresentation;

+ (id)versionOne;
+ (id)regularExpression;
+ (id)versionZero;
+ (id)versionWithPackedUInt32:(unsigned int)a0;
+ (BOOL)validateVersionString:(id)a0 major:(long long *)a1 minor:(long long *)a2;
+ (id)versionWithString:(id)a0;
+ (BOOL)validateVersionString:(id)a0;

- (BOOL)isCompatibleWithVersion:(id)a0;
- (id)debugDescription;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithMajor:(long long)a0 minor:(long long)a1;
- (BOOL)atLeastMajor:(long long)a0 minor:(long long)a1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqualToVersion:(id)a0;
- (id)description;

@end
