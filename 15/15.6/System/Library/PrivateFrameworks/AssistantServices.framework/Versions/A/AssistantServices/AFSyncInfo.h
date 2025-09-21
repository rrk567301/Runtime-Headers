@class NSString, NSSet, SASyncAppMetaData;

@interface AFSyncInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *anchor;
@property (copy, nonatomic) NSString *validity;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) SASyncAppMetaData *appMetadata;
@property (nonatomic) char targetIsLocal;
@property (nonatomic) char forVerification;
@property (copy, nonatomic) NSSet *reasons;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAnchor:(id)a0 forcingReset:(char)a1;

@end
