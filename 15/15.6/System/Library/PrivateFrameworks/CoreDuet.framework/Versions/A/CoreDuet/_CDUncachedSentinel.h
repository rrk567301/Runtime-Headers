@interface _CDUncachedSentinel : NSObject <_CDInteractionOrUncachedSentinel>

- (id)interactionIfCached;
- (char)isUncachedSentinel;

@end
