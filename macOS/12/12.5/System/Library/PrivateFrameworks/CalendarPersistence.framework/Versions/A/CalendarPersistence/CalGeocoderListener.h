@class CalLimitingQueue;

@interface CalGeocoderListener : CalPersistenceMonitor {
    CalLimitingQueue *_geocodingQueue;
    BOOL _userInitiatedLocationInterestWasChanged;
}

+ (id)sharedListener;

- (id)init;
- (void).cxx_destruct;
- (void)managedObjectContextDidSave:(id)a0;
- (void)managedObjectContextWillSave:(id)a0;
- (void)attemptGeocoding;

@end
