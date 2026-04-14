@class NSUUID, NSString;

@interface HMMediaGroupParticipant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryIdentifier;
@property (readonly, copy) NSString *audioDestinationIdentifier;
@property (readonly, copy) NSUUID *audioGroupIdentifier;
@property (readonly) unsigned long long variant;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAccessoryIdentifier:(id)a0 audioDestinationIdentifier:(id)a1 audioGroupIdentifier:(id)a2 variant:(unsigned long long)a3;

@end
