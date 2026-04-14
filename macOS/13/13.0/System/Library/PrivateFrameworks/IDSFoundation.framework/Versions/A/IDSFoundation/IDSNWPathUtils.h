@interface IDSNWPathUtils : NSObject

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)getDefaultPath;
- (BOOL)filterVirtualInterfaces:(char *)a0;
- (BOOL)isVoWiFiInterface:(char *)a0;

@end
