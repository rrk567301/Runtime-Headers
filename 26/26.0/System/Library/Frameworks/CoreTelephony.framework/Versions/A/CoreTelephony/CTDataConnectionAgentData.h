@class NSNumber;

@interface CTDataConnectionAgentData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int registrationStatus;
@property (retain, nonatomic) NSNumber *inHomeCountry;
@property (nonatomic) int dataPlanTier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initAgentDataFromInternetPath:(id)a0;
- (id)initAgentDataFromPath:(id)a0 agentType:(id)a1;
- (id)initAgentDataFromPath:(id)a0 domain:(id)a1 agentType:(id)a2;

@end
