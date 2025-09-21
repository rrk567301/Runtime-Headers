@class NSString;

@interface CADChangeTrackingClientId : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *suffix;
@property (readonly, nonatomic) NSString *customClientId;
@property (readonly, nonatomic) char hasCustomClientId;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)clientId;
- (id)initWithSuffix:(id)a0;
- (id)initWithCustomClientId:(id)a0;
- (id)clientIdWithBundleId:(id)a0;
- (char)hasSuffix;
- (char)isEqualToChangeTrackingClientId:(id)a0;

@end
