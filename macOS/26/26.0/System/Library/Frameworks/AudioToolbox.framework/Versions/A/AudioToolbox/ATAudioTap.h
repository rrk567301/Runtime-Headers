@class ATAudioTapDescription;

@interface ATAudioTap : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATAudioTapDescription *tapDescription;
@property (nonatomic, getter=isScreenSharingHost) BOOL screenSharingHost;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithTapDescription:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
