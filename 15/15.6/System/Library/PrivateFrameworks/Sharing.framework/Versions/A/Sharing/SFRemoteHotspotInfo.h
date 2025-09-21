@class NSString, NSNumber;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *name;
@property (copy) NSString *password;
@property (retain) NSNumber *channel;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 password:(id)a1 channel:(id)a2;

@end
