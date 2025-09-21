@class AVContentKeySession, NSMutableSet, NSMutableArray;

@interface FCAVAssetKeyFetchRequest : NSObject {
    char _forceRefresh;
    AVContentKeySession *_contentKeySession;
    NSMutableSet *_remainingKeyURIs;
    NSMutableArray *_errorsEncountered;
    id /* block */ _completionHandler;
}

- (void).cxx_destruct;

@end
