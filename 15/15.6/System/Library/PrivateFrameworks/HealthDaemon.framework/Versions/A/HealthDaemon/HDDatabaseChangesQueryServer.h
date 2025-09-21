@class NSString, NSMutableDictionary, HKQueryAnchor;

@interface HDDatabaseChangesQueryServer : HDQueryServer {
    NSMutableDictionary *_pendingSampleTypeChanges;
    HKQueryAnchor *_anchor;
    char _hasDeliveredInitialResults;
    NSString *_detailsQueryDateIndexSQL;
    NSString *_detailsQueryAnchorIndexSQL;
}

+ (Class)queryClass;

- (void).cxx_destruct;
- (id)objectTypes;
- (void)_queue_start;
- (char)_shouldListenForUpdates;
- (void)didAddSamplesOfTypes:(id)a0 anchor:(id)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (char)validateConfiguration:(id *)a0;

@end
