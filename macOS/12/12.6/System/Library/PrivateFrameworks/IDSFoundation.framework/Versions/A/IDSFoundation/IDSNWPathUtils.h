@interface IDSNWPathUtils : NSObject

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)getDefaultPath;
- (BOOL)isVoWiFiInterface:(char *)a0;

@end
