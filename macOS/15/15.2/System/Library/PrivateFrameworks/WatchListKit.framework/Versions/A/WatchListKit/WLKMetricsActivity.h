@class NSObject;
@protocol OS_nw_activity;

@interface WLKMetricsActivity : NSObject

@property (readonly) NSObject<OS_nw_activity> *activity;
@property (readonly) unsigned int label;

- (void).cxx_destruct;
- (void)finish:(id)a0;
- (id)initWithLabel:(unsigned int)a0;

@end
