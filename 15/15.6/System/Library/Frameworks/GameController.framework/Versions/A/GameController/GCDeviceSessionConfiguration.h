@class NSArray;

@interface GCDeviceSessionConfiguration : NSObject <NSCopying> {
    char _bypassUIKit;
}

@property (copy, nonatomic) NSArray *deviceProviderTypes;
@property (nonatomic) char coalesceRemotes;
@property (nonatomic) char monitorControllerEventsInBackground;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCopyOf:(id)a0;
- (void)setBypassUIKit:(char)a0;
- (char)bypassUIKit;

@end
