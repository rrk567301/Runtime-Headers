@class NSString, NSDate;

@interface SMTAnnouncementContext : NSObject <NSSecureCoding> {
    NSString *_platform;
    NSString *_notificationType;
    NSDate *_lastAnnouncementTimestamp;
    BOOL _isSameAppIdAsLastAnnounce;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *platform;
@property (readonly, copy, nonatomic) NSString *notificationType;
@property (readonly, copy, nonatomic) NSDate *lastAnnouncementTimestamp;
@property (readonly, nonatomic) BOOL isSameAppIdAsLastAnnounce;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithBuilder:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
