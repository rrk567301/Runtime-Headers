@class SharingSessionSerialized;

@interface SCContentSharingNotification : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SharingSessionSerialized *session;
@property (nonatomic) long long type;
@property (nonatomic) long long pickerType;

+ (char)isValidNotificationType:(long long)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
