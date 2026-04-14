@class NSString, NSNumber, NSObject;
@protocol OS_os_log;

@interface BKUIDevice : NSObject {
    NSObject<OS_os_log> *_bkuiDeviceLog;
}

@property (retain) NSString *modelName;
@property (retain) NSNumber *housingColorIndex;

+ (id)sharedInstance;

- (BOOL)isUnknown;
- (void).cxx_destruct;
- (id)displayName;
- (id)init;
- (BOOL)hasTouchBar;
- (BOOL)hasMesa;
- (BOOL)isMacPro;
- (BOOL)isMacMini;
- (BOOL)isDark:(id)a0;
- (BOOL)isJ773g;
- (BOOL)isJ314x;
- (BOOL)isJ773s;
- (void)updateModelname;
- (id)getHousingColorIndex;
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
- (void)updateHousingColorIndex;

@end
