@class NSString, PFUbiquityLocation, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface PFUbiquitySafeSaveFile : NSObject {
    PFUbiquityLocation *_permanentLocation;
    PFUbiquityLocation *_safeSaveLocation;
    PFUbiquityLocation *_currentLocation;
    NSString *_localPeerID;
    char _continueCheckingDownload;
    char _downloadSuccess;
    NSError *_downloadError;
    char _continueCheckingUpload;
    char _safeSaveSuccess;
    char _moveAfterSave;
    NSError *_safeSaveError;
    NSObject<OS_dispatch_semaphore> *_safeSaveSemaphore;
    char _isRegistered;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPermanentLocation:(id)a0 safeSaveLocation:(id)a1 andLocalPeerID:(id)a2;
- (char)loadFileFromLocation:(id)a0 error:(id *)a1;
- (char)moveToPermanentLocation:(id *)a0;
- (char)waitForFileToUpload:(id *)a0;
- (char)writeFileToLocation:(id)a0 error:(id *)a1;

@end
