@protocol _TtP25CloudSubscriptionFeatures15GMOptInProtocol_;

@interface CSFGMOptIn : NSObject <CloudSubscriptionFeatures.GMOptInProtocol>

@property (retain, nonatomic) id<_TtP25CloudSubscriptionFeatures15GMOptInProtocol_> gmOptIn;
@property (nonatomic) BOOL isOptedIn;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOptInProvider:(id)a0;

@end
