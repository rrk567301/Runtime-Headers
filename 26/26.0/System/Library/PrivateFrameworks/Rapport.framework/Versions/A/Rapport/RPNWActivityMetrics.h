@class NSObject;
@protocol OS_nw_activity;

@interface RPNWActivityMetrics : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_nw_activity> *nwActivity;

+ (id)metricsUsingToken:(id)a0;

- (void)submitMetrics;
- (void).cxx_destruct;
- (id)_initWithNWActivity:(id)a0;
- (id)_metricsDictionary;

@end
