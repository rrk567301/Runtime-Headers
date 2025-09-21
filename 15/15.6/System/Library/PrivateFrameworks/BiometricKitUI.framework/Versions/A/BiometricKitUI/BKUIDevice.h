@class NSString, NSObject;
@protocol OS_os_log;

@interface BKUIDevice : NSObject {
    NSObject<OS_os_log> *_bkuiDeviceLog;
}

@property (readonly, nonatomic) NSString *modelName;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)displayName;
- (char)isUnknown;
- (char)isMacPro;
- (void)updateModelname;
- (char)isMacBook;
- (char)isMacMini;
- (char)isiMac;

@end
