@class NSOperationQueue;

@interface ABEmailCertificateController : NSObject {
    NSOperationQueue *_operationQueue;
}

+ (id)sharedController;
+ (id)certificateImage;

- (void).cxx_destruct;
- (BOOL)hasPendingOperations;
- (id)init;
- (void)cancelPendingCertLookups;
- (id)certificateButton;
- (void)certificateSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (void)collectionDidInsertDatumView:(id)a0;
- (void)showCertificatePanel:(id)a0;

@end
