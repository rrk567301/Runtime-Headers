@class NSMutableDictionary;

@interface _PSPhotoSuggestionsOutstandingRequestsGuardedData : NSObject {
    BOOL _waitingForRequestIDForCurrentThread;
    NSMutableDictionary *_outstandingRequests;
}

- (void).cxx_destruct;
- (id)init;

@end
