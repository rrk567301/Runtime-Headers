@class VCScreenShare, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCScreenCaptureManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSMutableArray *_screenCaptureClients;
    VCScreenShare *_currentActiveScreenShare;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)registerBlocksForService;
- (id)getErrorDictionaryFromError:(id)a0;
- (void)screenCaptureStartFor:(id)a0 didSucceed:(BOOL)a1 withError:(id)a2;
- (void)screenCaptureStopFor:(id)a0 didSucceed:(BOOL)a1 withError:(id)a2;
- (id)screenShareDictionary:(id)a0;
- (void)startPrivacyAccountingInternval;
- (void)endPrivacyAccountingInterval;

@end
