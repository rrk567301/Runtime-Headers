@class NSString;

@interface CADChangeTrackingClientId : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *suffix;
@property (readonly, nonatomic) NSString *customClientId;
@property (readonly, nonatomic) BOOL hasCustomClientId;

- (BOOL)hasSuffix;
- (BOOL)isEqualToChangeTrackingClientId:(id)a0;
- (id)clientIdWithBundleId:(id)a0;
- (id)initWithSuffix:(id)a0;
- (id)description;
- (id)initWithCustomClientId:(id)a0;
- (void).cxx_destruct;
- (id)clientId;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
