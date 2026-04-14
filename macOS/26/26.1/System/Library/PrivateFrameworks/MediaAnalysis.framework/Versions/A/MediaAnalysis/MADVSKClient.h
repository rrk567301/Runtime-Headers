@class VSKClient;

@interface MADVSKClient : NSObject

@property (readonly, nonatomic) BOOL isPrewarmed;
@property (readonly, nonatomic) VSKClient *client;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cooldown;
- (void)warmup;
- (id)initWithConfig:(id)a0 error:(id *)a1;

@end
