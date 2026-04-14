@class MNArrivalInfo;

@interface MNNavigationServiceCallback_DidUpdateArrivalInfo : MNNavigationServiceCallbackParameters

@property (retain, nonatomic) MNArrivalInfo *arrivalInfo;
@property (nonatomic) long long previousState;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
