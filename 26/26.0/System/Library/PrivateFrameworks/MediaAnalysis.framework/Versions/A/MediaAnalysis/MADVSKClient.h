@class VSKClient;

@interface MADVSKClient : NSObject

@property (readonly, nonatomic) BOOL isPrewarmed;
@property (readonly, nonatomic) VSKClient *client;

- (void)dealloc;
- (void)warmup;
- (void)cooldown;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 error:(id *)a1;

@end
