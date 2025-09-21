@class CWFNetworkProfile, NSArray;

@interface CWFAutoJoinParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long trigger;
@property (nonatomic) long long mode;
@property (copy, nonatomic) CWFNetworkProfile *targetNetworkProfile;
@property (copy, nonatomic) NSArray *preferredChannels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToAutoJoinParameters:(id)a0;

@end
