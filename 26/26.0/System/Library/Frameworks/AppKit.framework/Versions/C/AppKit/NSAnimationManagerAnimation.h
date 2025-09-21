@class NSString, CATransactionCompletionItem;
@protocol NSObject, NSRunningAnimation;

@interface NSAnimationManagerAnimation : NSObject

@property (retain) id<NSRunningAnimation> runningAnimation;
@property (retain) id targetValue;
@property (retain) id targetObject;
@property (copy) NSString *targetKeyPath;
@property (retain) CATransactionCompletionItem *completionItem;
@property double startTime;
@property long long options;
@property BOOL hasBeenRemoved;
@property (retain) id<NSObject> activityToken;

- (void)dealloc;

@end
