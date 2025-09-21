@class ACActivityDescriptor, NSString;

@interface ActivityUIServices.ActivityUpdateProvider : NSObject <ActivityUIServices.ActivityUpdateProviding> {
    void /* unknown type, empty encoding */ activityIdentifier;
    void /* unknown type, empty encoding */ activityDescriptor;
    void /* unknown type, empty encoding */ systemMetricsRequest;
}

@property (nonatomic) long long activityState;
@property (nonatomic, retain) ACActivityDescriptor *descriptor;
@property (nonatomic, readonly) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithActivityDescriptor:(id)a0 activityState:(long long)a1 systemMetricsRequest:(id)a2;

@end
