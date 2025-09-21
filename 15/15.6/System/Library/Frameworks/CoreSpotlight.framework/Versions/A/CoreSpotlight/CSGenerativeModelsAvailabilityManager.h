@interface CSGenerativeModelsAvailabilityManager : NSObject {
    int _gmsNotifyToken;
    int _cachedStatuses[3];
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _cacheLock;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (char)isPhotosSemanticSearchAvailable;
- (char)isTextPersonExtractionAvailable;
- (void)_handleLocaleChange;
- (long long)_statusForUseCase:(unsigned long long)a0;
- (char)isSemanticSearchAvailable;

@end
