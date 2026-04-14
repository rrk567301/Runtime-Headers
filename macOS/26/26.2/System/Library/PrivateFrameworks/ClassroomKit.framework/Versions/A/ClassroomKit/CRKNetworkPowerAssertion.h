@class NSString;

@interface CRKNetworkPowerAssertion : NSObject {
    unsigned int mPowerAssertion;
}

@property (nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)sharedInstance;
+ (void)decrement;
+ (void)increment;

- (void)decrement;
- (void).cxx_destruct;
- (void)increment;
- (id)init;

@end
