@interface _DKSyncErrors : NSObject

+ (id)domain;
+ (id)disabled;
+ (id)internalFailure;
+ (id)invalidRequest;
+ (id)invalidData;
+ (id)failedToFetchChanges;
+ (id)unavailableForCurrentUser;
+ (id)couldNotSaveForSync;
+ (id)failedToApplyRemoteChanges;
+ (id)invalidResponse;
+ (id)missingHighWaterMark;
+ (id)temporaryFailure;

@end
