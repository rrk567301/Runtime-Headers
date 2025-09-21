@class NSString, NSURL, NSDictionary;

@interface BRCUserNotificationMetadata : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSURL *thumbnailURL;
@property (retain, nonatomic) NSString *iconType;
@property (retain, nonatomic) NSDictionary *userInfo;

- (void).cxx_destruct;

@end
