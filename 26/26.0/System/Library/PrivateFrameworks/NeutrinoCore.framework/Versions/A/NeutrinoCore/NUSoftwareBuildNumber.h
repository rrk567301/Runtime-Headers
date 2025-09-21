@interface NUSoftwareBuildNumber : NSObject

@property (readonly, nonatomic) unsigned short major;
@property (readonly, nonatomic) char minor;
@property (readonly, nonatomic) unsigned short update;
@property (readonly, nonatomic) char rebuild;

+ (id)buildNumberWithString:(id)a0 error:(out id *)a1;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (long long)compareToBuildNumber:(id)a0;
- (id)initWithMajor:(unsigned short)a0 minor:(char)a1 update:(unsigned short)a2 rebuild:(char)a3;
- (BOOL)isEqualToSoftwareBuildNumber:(id)a0;

@end
