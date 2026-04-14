@class NSString;

@interface PLChangePublisherDebugEvent : PFAbstractStateCaptureEvent

@property long long kind;
@property (readonly) NSString *eventDescription;
@property BOOL hasMessage;
@property BOOL hasEmptyMessage;
@property double postTimestamp;
@property unsigned long long postCount;

- (void)reset;
- (id)description;
- (void)startLocalPublish;
- (void)startRemotePublish;

@end
