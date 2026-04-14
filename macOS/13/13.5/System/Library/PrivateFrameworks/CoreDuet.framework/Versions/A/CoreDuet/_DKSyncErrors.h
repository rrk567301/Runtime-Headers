@interface _DKSyncErrors : NSObject

+ (id)domain;
+ (id)disabled;
+ (id)internalFailure;
+ (id)invalidResponse;
+ (id)couldNotSaveForSync;
+ (id)failedToApplyRemoteChanges;
+ (id)failedToFetchChanges;
+ (id)invalidData;
+ (id)invalidRequest;
+ (id)missingHighWaterMark;
+ (id)temporaryFailure;
+ (id)unavailableForCurrentUser;

@end
