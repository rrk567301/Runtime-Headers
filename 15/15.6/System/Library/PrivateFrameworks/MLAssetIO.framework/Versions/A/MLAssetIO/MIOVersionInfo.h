@class NSString;

@interface MIOVersionInfo : NSObject <NSCopying>

@property (readonly, nonatomic) long long majorVersion;
@property (readonly, nonatomic) long long minorVersion;
@property (readonly, nonatomic) long long patchVersion;
@property (readonly, nonatomic) NSString *versionNumberString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithMajor:(long long)a0 minor:(long long)a1 patch:(long long)a2;

@end
