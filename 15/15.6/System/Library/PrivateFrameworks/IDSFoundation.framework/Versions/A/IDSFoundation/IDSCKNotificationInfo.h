@class NSString;

@interface IDSCKNotificationInfo : NSObject

@property (copy, nonatomic) NSString *alertLocalizationKey;
@property (nonatomic) char shouldSendContentAvailable;

+ (id)alloc;
+ (Class)__class;

- (void).cxx_destruct;

@end
