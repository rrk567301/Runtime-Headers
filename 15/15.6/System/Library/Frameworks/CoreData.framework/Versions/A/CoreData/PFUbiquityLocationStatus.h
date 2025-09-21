@class NSError, PFUbiquityLocation;

@interface PFUbiquityLocationStatus : NSObject {
    char _isLive;
    char _isDeleted;
    char _isDownloaded;
    char _isDownloading;
    char _isUploaded;
    char _isUploading;
    char _isImported;
    char _isScheduled;
    char _isExported;
    char _isFailed;
    PFUbiquityLocation *_location;
    NSError *_error;
    unsigned long long _hash;
    long long _numBytes;
    long long _numNotifications;
}

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLocation:(id)a0;

@end
