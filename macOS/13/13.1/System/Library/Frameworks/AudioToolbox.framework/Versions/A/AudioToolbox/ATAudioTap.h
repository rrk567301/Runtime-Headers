@class ATAudioTapDescription;

@interface ATAudioTap : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATAudioTapDescription *tapDescription;
@property (nonatomic, getter=isScreenSharingHost) BOOL screenSharingHost;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTapDescription:(id)a0;

@end
