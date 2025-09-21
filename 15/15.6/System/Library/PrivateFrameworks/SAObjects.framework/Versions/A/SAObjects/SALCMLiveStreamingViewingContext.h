@class NSDate;

@interface SALCMLiveStreamingViewingContext : SALCMViewingContext

@property (copy, nonatomic) NSDate *eventStartTime;
@property (nonatomic) char watchingLive;

+ (id)liveStreamingViewingContext;
+ (id)liveStreamingViewingContextWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
