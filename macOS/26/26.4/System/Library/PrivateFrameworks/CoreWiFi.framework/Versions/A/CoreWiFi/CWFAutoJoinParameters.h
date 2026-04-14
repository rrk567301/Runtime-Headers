@class CWFNetworkProfile, NSArray;

@interface CWFAutoJoinParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long trigger;
@property (nonatomic) long long mode;
@property (copy, nonatomic) CWFNetworkProfile *targetNetworkProfile;
@property (copy, nonatomic) NSArray *preferredChannels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToAutoJoinParameters:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
