@class VSKClient;

@interface MADVSKClient : NSObject

@property (readonly, nonatomic) BOOL isPrewarmed;
@property (readonly, nonatomic) VSKClient *client;

- (void)cooldown;
- (void)warmup;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfig:(id)a0 error:(id *)a1;

@end
