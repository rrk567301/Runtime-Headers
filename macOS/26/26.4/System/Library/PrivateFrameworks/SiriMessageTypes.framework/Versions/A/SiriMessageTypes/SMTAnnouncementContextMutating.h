@class NSString, NSDate;

@interface SMTAnnouncementContextMutating : NSObject

@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *notificationType;
@property (copy, nonatomic) NSDate *lastAnnouncementTimestamp;
@property (nonatomic) BOOL isSameAppIdAsLastAnnounce;

- (void).cxx_destruct;

@end
