@interface _DPSemanticVersion : NSObject

@property (readonly, nonatomic) unsigned long long majorVersion;
@property (readonly, nonatomic) unsigned long long minorVersion;
@property (readonly, nonatomic) unsigned long long patchVersion;

- (BOOL)isEqual:(id)a0;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 patchVersion:(unsigned long long)a2;
- (id)description;
- (id)initWithString:(id)a0 error:(id *)a1;
- (BOOL)isBackwardCompatibleWithVersion:(id)a0;

@end
