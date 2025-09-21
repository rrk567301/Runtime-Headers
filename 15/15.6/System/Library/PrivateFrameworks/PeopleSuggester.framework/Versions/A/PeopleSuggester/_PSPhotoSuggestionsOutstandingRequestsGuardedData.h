@class NSMutableDictionary;

@interface _PSPhotoSuggestionsOutstandingRequestsGuardedData : NSObject {
    char _waitingForRequestIDForCurrentThread;
    NSMutableDictionary *_outstandingRequests;
}

- (id)init;
- (void).cxx_destruct;

@end
