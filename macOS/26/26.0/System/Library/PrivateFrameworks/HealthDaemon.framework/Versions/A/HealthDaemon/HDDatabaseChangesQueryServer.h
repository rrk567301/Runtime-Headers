@class NSString, NSMutableDictionary, HKQueryAnchor;

@interface HDDatabaseChangesQueryServer : HDQueryServer {
    NSMutableDictionary *_pendingSampleTypeChanges;
    HKQueryAnchor *_anchor;
    BOOL _hasDeliveredInitialResults;
    NSString *_detailsQueryDateIndexSQL;
    NSString *_detailsQueryAnchorIndexSQL;
}

+ (Class)queryClass;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)_queue_start;
- (id)objectTypes;
- (BOOL)validateConfiguration:(id *)a0;
- (void)samplesOfTypesWereRemoved:(id)a0 anchor:(id)a1;
- (BOOL)_shouldListenForUpdates;
- (void)didAddSamplesOfTypes:(id)a0 anchor:(id)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;

@end
