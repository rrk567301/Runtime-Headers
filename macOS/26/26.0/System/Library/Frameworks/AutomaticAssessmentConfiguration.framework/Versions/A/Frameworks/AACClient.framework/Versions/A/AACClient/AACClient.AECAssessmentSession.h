@class _TtC9AACClient26AECAssessmentConfiguration;

@interface AACClient.AECAssessmentSession : NSObject {
    void /* unknown type, empty encoding */ stateAntiphony;
    void /* unknown type, empty encoding */ taskQueue;
    void /* unknown type, empty encoding */ policyBundleFactory;
    void /* unknown type, empty encoding */ configurationValidator;
    void /* unknown type, empty encoding */ policySession;
    void /* unknown type, empty encoding */ updateSubscription;
    void /* unknown type, empty encoding */ policySessionPrimitives;
}

@property (class, nonatomic, readonly) BOOL supportsMultiAppConfiguration;

@property (nonatomic, retain) _TtC9AACClient26AECAssessmentConfiguration *configuration;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, readonly) BOOL isActive;

- (void)begin;
- (void)end;
- (id)init;
- (void)updateWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 queue:(id)a1;

@end
