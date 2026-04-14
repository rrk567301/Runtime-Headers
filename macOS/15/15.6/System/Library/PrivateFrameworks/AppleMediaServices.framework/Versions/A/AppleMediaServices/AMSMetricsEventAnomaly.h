@class NSString;

@interface AMSMetricsEventAnomaly : NSObject {
    void /* unknown type, empty encoding */ descriptionOverride;
    void /* unknown type, empty encoding */ details;
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *details;
@property (nonatomic, readonly) NSString *identifier;

- (id)init;
- (void).cxx_destruct;

@end
