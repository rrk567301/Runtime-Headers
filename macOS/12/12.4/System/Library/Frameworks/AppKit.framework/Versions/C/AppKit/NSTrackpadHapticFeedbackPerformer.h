@class NSString;

@interface NSTrackpadHapticFeedbackPerformer : NSObject <NSHapticFeedbackPerformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performFeedbackPattern:(long long)a0 performanceTime:(unsigned long long)a1;
- (void)_performFeedbackPattern:(long long)a0;

@end
