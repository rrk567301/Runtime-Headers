@class NSString, NSMutableDictionary, HKQueryAnchor;

@interface HDDatabaseChangesQueryServer : HDQueryServer {
    NSMutableDictionary *_pendingSampleTypeChanges;
    HKQueryAnchor *_anchor;
    BOOL _hasDeliveredInitialResults;
    NSString *_detailsQueryDateIndexSQL;
    NSString *_detailsQueryAnchorIndexSQL;
}

+ (Class)queryClass;

- (BOOL)_shouldListenForUpdates;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (void).cxx_destruct;
- (void)didAddSamplesOfTypes:(id)a0 anchor:(id)a1;
- (id)objectTypes;
- (BOOL)validateConfiguration:(id *)a0;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (void)samplesAdded:(id)a0 anchor:(id)a1;

@end
