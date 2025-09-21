@class NSString;

@interface PLChangePublisherDebugEvent : PFAbstractStateCaptureEvent

@property long long kind;
@property (readonly) NSString *eventDescription;
@property char hasMessage;
@property char hasEmptyMessage;
@property double postTimestamp;
@property unsigned long long postCount;

- (id)description;
- (void)reset;
- (void)startLocalPublish;
- (void)startRemotePublish;

@end
