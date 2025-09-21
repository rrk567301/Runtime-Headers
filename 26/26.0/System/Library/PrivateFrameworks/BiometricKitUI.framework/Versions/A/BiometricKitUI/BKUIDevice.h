@class NSString, NSObject;
@protocol OS_os_log;

@interface BKUIDevice : NSObject {
    NSObject<OS_os_log> *_bkuiDeviceLog;
}

@property (retain) NSString *modelName;

+ (id)sharedInstance;

- (id)displayName;
- (BOOL)isUnknown;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasTouchBar;
- (BOOL)isMacPro;
- (BOOL)isMacMini;
- (BOOL)isJ314x;
- (BOOL)isJ773s;
- (void)updateModelname;
- (BOOL)isDark:(id)a0;
- (BOOL)isJ773g;
- (BOOL)hasNoCompetingScreens;
- (BOOL)isJ180;
- (BOOL)isJ31x;
- (BOOL)isJ434;
- (BOOL)isJ43x;
- (BOOL)isJ456;
- (BOOL)isJ45x;
- (BOOL)isJ473;
- (BOOL)isJ62x;
- (BOOL)isMacBook;
- (BOOL)isMacStudio;
- (BOOL)isiMac;

@end
