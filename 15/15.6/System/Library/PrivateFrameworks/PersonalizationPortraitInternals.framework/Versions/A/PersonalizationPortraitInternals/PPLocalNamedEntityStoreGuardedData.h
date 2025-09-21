@class _PASLazyResult;

@interface PPLocalNamedEntityStoreGuardedData : NSObject {
    char _pendingNamedEntityChangeNotification;
    _PASLazyResult *_filter;
    _PASLazyResult *_mapsSearchQueryResult;
}

- (void).cxx_destruct;

@end
