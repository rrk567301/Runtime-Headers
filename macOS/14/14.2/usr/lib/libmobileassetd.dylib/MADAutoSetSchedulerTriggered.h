@class NSString, MADAutoSetPolicy;

@interface MADAutoSetSchedulerTriggered : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientDomainName;
@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (retain, nonatomic) MADAutoSetPolicy *schedulerPolicy;

- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initForClientDomainName:(id)a0 forAssetSetIdentifier:(id)a1 withSchedulerPolicy:(id)a2;

@end
