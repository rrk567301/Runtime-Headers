@class VCPMADResource;

@interface VCPMADResourceEntry : NSObject

@property (retain, nonatomic) VCPMADResource *resource;
@property (nonatomic) long long activeCount;

- (void).cxx_destruct;
- (id)initWithResource:(id)a0;

@end
