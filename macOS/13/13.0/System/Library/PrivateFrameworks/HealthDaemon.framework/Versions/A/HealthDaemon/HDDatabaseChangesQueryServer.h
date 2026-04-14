@class NSString, NSMutableDictionary, HKQueryAnchor;

@interface HDDatabaseChangesQueryServer : HDQueryServer {
    NSMutableDictionary *_pendingSampleTypeChanges;
    HKQueryAnchor *_anchor;
    BOOL _hasDeliveredInitialResults;
    NSString *_detailsQueryDateIndexSQL;
    NSString *_detailsQueryAnchorIndexSQL;
}

+ (Class)queryClass;

- (void).cxx_destruct;
- (id)objectTypes;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (BOOL)validateConfiguration:(id *)a0;
- (void)_queue_start;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)didAddSamplesOfTypes:(id)a0 anchor:(id)a1;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (BOOL)_shouldListenForUpdates;

@end
