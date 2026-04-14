@interface IFDefaults : NSObject

@property (readonly) BOOL isSolariumEnabled;
@property (readonly) BOOL iconStackAppIconsAllowed;

+ (id)sharedInstance;

- (id)init;

@end
