@class NSString, NSNumber;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *name;
@property (copy) NSString *password;
@property (retain) NSNumber *channel;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 password:(id)a1 channel:(id)a2;

@end
