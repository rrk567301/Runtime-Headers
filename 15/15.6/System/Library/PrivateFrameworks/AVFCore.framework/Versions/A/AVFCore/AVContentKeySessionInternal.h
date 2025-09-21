@class NSHashTable, AVWeakReference, NSURL, NSData, NSString, NSMutableDictionary, NSObject, NSMutableArray, AVWeakReferencingDelegateStorage, NSMapTable, AVContentKeyReportGroup;
@protocol OS_dispatch_queue;

@interface AVContentKeySessionInternal : NSObject {
    AVWeakReferencingDelegateStorage *_delegateStorage;
    AVWeakReference *_weakReference;
    NSURL *_storageURL;
    NSData *_appIdentifier;
    char _isExpired;
    char _internal;
    AVContentKeyReportGroup *_defaultContentKeyGroup;
    NSObject<OS_dispatch_queue> *_threadSafetyQ;
    NSHashTable *_contentKeyRecipients;
    NSString *_keySystem;
    NSMutableDictionary *keyRequestsByRequestID;
    NSMutableArray *_contentKeyGroups;
    NSMapTable *cryptorUUIDToContentKeyRequestMap;
    NSMutableDictionary *keyRequestParamsByRequestID;
    NSMutableDictionary *keyRequestTrackerByRequestID;
    NSMutableDictionary *cryptorsByIdentifer;
    NSMapTable *contentKeyRequestByKeySpecifierMap;
    NSMapTable *contentKeyByKeySpecifierMap;
    NSData *_protectorSessionIdentifier;
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct OpaqueFigContentKeyBoss { } *_contentKeyBoss;
    char _useContentKeyBoss;
}

@end
