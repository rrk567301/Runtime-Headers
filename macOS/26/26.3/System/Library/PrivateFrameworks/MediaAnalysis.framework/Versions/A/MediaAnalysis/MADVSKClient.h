@class VSKClient;

@interface MADVSKClient : NSObject

@property (readonly, nonatomic) BOOL isPrewarmed;
@property (readonly, nonatomic) VSKClient *client;

- (void)warmup;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cooldown;
- (id)initWithConfig:(id)a0 error:(id *)a1;

@end
