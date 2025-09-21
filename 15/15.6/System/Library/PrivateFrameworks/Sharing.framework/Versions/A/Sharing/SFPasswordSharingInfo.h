@class NSNumber, NSString;

@interface SFPasswordSharingInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *channel;
@property (retain, nonatomic) NSString *networkName;
@property (retain, nonatomic) NSString *psk;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
