@class NSUUID, NSString;

@interface HMMediaGroupParticipant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryIdentifier;
@property (readonly, copy) NSString *audioDestinationIdentifier;
@property (readonly, copy) NSUUID *audioGroupIdentifier;
@property (readonly) unsigned long long variant;
@property (readonly) unsigned long long role;
@property (readonly, copy) NSUUID *roomIdentifier;
@property (readonly, copy) NSString *roomName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAccessoryIdentifier:(id)a0 audioDestinationIdentifier:(id)a1 audioGroupIdentifier:(id)a2 variant:(unsigned long long)a3 role:(unsigned long long)a4 roomIdentifier:(id)a5 roomName:(id)a6;

@end
