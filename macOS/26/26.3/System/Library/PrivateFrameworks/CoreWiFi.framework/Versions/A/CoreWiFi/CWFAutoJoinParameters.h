@class CWFNetworkProfile, NSArray;

@interface CWFAutoJoinParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long trigger;
@property (nonatomic) long long mode;
@property (copy, nonatomic) CWFNetworkProfile *targetNetworkProfile;
@property (copy, nonatomic) NSArray *preferredChannels;

- (id)description;
- (BOOL)isEqualToAutoJoinParameters:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
