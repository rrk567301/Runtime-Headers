@class NSString, NSArray;

@interface OBPrivacyFlowGroup : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *privacyFlows;

+ (id)groupFlowsByCombinedHeader:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 privacyFlows:(id)a1;

@end
