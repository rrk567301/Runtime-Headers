@protocol MTLResource;

@interface CCMTLResourceUsage : NSObject

@property (retain, nonatomic) id<MTLResource> resource;
@property (nonatomic) unsigned long long stages;
@property (nonatomic) unsigned long long usage;

- (void).cxx_destruct;

@end
