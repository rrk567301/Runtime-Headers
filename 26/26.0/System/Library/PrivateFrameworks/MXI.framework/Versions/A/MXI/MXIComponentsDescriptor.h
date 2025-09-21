@interface MXIComponentsDescriptor : NSObject

@property (nonatomic) int extendedTextureIndex;
@property (nonatomic) long long semantic;
@property (nonatomic) struct { long long r; long long g; long long b; long long a; } destination;

- (id)init;

@end
