@class NSString;

@interface CADChangeTrackingClientId : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *suffix;
@property (readonly, nonatomic) NSString *customClientId;
@property (readonly, nonatomic) BOOL hasCustomClientId;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)clientId;
- (id)initWithSuffix:(id)a0;
- (id)initWithCustomClientId:(id)a0;
- (BOOL)hasSuffix;
- (id)clientIdWithBundleId:(id)a0;
- (BOOL)isEqualToChangeTrackingClientId:(id)a0;

@end
