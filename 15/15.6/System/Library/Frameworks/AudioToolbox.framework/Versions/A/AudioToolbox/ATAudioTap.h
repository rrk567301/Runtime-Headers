@class ATAudioTapDescription;

@interface ATAudioTap : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) ATAudioTapDescription *tapDescription;
@property (nonatomic, getter=isScreenSharingHost) char screenSharingHost;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTapDescription:(id)a0;

@end
