@protocol OS_nw_activity;

@interface AMSMetricsActivity : NSObject {
    void /* unknown type, empty encoding */ activity;
}

@property (nonatomic, readonly) id<OS_nw_activity> nwActivity;

- (id)initWithLabel:(long long)a0;
- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;
- (void)completeAfter:(id)a0;
- (id)initWithLabel:(long long)a0 parent:(id)a1;

@end
