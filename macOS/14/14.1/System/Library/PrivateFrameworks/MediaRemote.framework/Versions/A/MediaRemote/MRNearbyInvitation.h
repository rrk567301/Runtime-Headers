@class NSString;

@interface MRNearbyInvitation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) unsigned char routeType;
@property (retain, nonatomic) NSString *localizedSessionName;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
