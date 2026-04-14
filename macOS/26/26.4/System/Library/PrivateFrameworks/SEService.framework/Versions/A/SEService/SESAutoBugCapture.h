@class NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface SESAutoBugCapture : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
}

+ (id)_getInstance;
+ (void)requestAutoBugCapture:(id)a0 subType:(id)a1 subTypeContext:(id)a2 attachments:(id)a3 completion:(id /* block */)a4;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_checkRateLimitForType:(id)a0 subType:(id)a1;
- (void)_sync_requestAutoBugCapture:(id)a0 subType:(id)a1 subTypeContext:(id)a2 attachments:(id)a3 completion:(id /* block */)a4;

@end
