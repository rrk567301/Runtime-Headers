@interface _DKSyncErrors : NSObject

+ (id)domain;
+ (id)disabled;
+ (id)internalFailure;
+ (id)unavailableForCurrentUser;
+ (id)couldNotSaveForSync;
+ (id)failedToApplyRemoteChanges;
+ (id)failedToFetchChanges;
+ (id)invalidData;
+ (id)invalidRequest;
+ (id)invalidResponse;
+ (id)missingHighWaterMark;
+ (id)temporaryFailure;

@end
