@class HMMatterHome;

@interface HMCHIPEcosystemFetchRoomsRequest : HMCHIPEcosystemRequest

@property (readonly, copy, nonatomic) HMMatterHome *home;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)messageType;
- (id)attributeDescriptions;
- (id)initWithHome:(id)a0;

@end
