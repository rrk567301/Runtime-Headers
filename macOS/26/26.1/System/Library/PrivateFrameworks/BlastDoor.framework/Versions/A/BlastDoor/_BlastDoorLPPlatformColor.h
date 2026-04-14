@interface _BlastDoorLPPlatformColor : NSObject <NSCopying>

@property (nonatomic) double r;
@property (nonatomic) double g;
@property (nonatomic) double b;
@property (nonatomic) double a;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
