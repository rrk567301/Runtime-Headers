@class NSString;

@interface SessionAssertion.ProminentPresentationAssertion : NSObject {
    void /* unknown type, empty encoding */ attributeAssertion;
    void /* unknown type, empty encoding */ invalidationHandler;
    void /* function */ activityIdentifier;
    void /* function */ explanation;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *activityIdentifier;
@property (nonatomic, copy) NSString *explanation;
@property (nonatomic, readonly) unsigned long long snaInvalidationReason;
@property (nonatomic, readonly) unsigned long long snaState;
@property (nonatomic, readonly) NSString *snaSessionIdentifier;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)initWithExplanation:(id)a0 activityIdentifier:(id)a1 duration:(double)a2 invalidationHandler:(id /* block */)a3;

@end
