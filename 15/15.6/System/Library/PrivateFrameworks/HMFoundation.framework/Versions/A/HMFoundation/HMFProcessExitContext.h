@class NSError, NSDate;

@interface HMFProcessExitContext : NSObject

@property (readonly, nonatomic) char isStale;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) char isCrash;
@property (readonly, nonatomic) long long crashReasonCode;
@property (readonly, nonatomic) char isJetsam;
@property (readonly, nonatomic) long long jetsamReasonCode;
@property (readonly, nonatomic) NSError *errorRepresentation;
@property (readonly, nonatomic) long long OSReasonDomain;
@property (readonly, nonatomic) unsigned long long OSReasonCode;

+ (id)lastExitContext;
+ (char)onceCompareAndSetTimestamp:(id)a0 toStoredValueWithKey:(id)a1 inStore:(id)a2;

- (void).cxx_destruct;
- (id)initWithRBSProcessExitContext:(id)a0 processName:(id)a1 userDefaultsStore:(id)a2 resetStoreReadToken:(char)a3;
- (id)initWithUserDefaultsStore:(id)a0 processLastRecordedExitTimeKey:(id)a1 resetStoreReadToken:(char)a2 timestamp:(id)a3 osReasonDomain:(long long)a4 osReasonCode:(unsigned long long)a5 isCrash:(char)a6 isJetsam:(char)a7 errorRepresentation:(id)a8;

@end
