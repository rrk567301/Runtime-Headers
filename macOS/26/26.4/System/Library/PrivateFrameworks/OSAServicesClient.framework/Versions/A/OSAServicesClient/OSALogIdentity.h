@class NSString;

@interface OSALogIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *incidentID;
@property (readonly, nonatomic) NSString *bugType;

- (id)initWithIncidentID:(id)a0 bugType:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
