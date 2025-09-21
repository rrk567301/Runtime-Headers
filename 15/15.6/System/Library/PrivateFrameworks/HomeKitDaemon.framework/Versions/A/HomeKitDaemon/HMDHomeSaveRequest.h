@class HMDHome, NSString, NSDictionary;

@interface HMDHomeSaveRequest : HMFObject

@property (readonly, nonatomic) HMDHome *home;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSDictionary *information;
@property (readonly, nonatomic) unsigned long long saveOptions;
@property (readonly, nonatomic) char objectChange;
@property (readonly, nonatomic) char incrementGeneration;

- (void).cxx_destruct;
- (id)_initWithHome:(id)a0 reason:(id)a1 information:(id)a2 postSyncNotification:(char)a3 objectChange:(char)a4 saveOptions:(unsigned long long)a5;
- (void)_updateSaveOptions:(char)a0 reason:(id)a1;
- (id)initWithHome:(id)a0 reason:(id)a1 information:(id)a2 postSyncNotification:(char)a3 objectChange:(char)a4;
- (id)initWithReason:(id)a0 information:(id)a1 postSyncNotification:(char)a2;
- (id)initWithReason:(id)a0 information:(id)a1 saveOptions:(unsigned long long)a2;

@end
