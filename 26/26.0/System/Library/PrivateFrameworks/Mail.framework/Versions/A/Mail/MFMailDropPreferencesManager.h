@interface MFMailDropPreferencesManager : NSObject

@property (readonly, nonatomic) long long attachmentTTL;
@property (readonly, nonatomic) float maxMessageSize;
@property (readonly, nonatomic) float minMessageSize;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)init;

@end
