@class NSString, NSError;

@interface Gestures.AnyGestureNodeShim : NSObject <GFGestureNode> {
    void /* unknown type, empty encoding */ isValueless;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, weak) void /* function */ container;
@property (nonatomic, weak) void /* function */ coordinator;
@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly) BOOL blocked;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *tag;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL disallowExclusionWithUnresolvedFailureRequirements;
@property (nonatomic, readonly) long long platformKey;
@property (nonatomic, readonly) NSError *failureReason;

- (BOOL)isDisabled;
- (id)init;
- (BOOL)isBlocked;
- (void).cxx_destruct;
- (BOOL)abort:(id *)a0;
- (void)addRelationWithType:(long long)a0 role:(long long)a1 relatedNode:(id)a2;
- (BOOL)failWithReason:(id)a0 error:(id *)a1;
- (void)removeRelationWithType:(long long)a0 role:(long long)a1 relatedNode:(id)a2;
- (void)setTracking:(BOOL)a0 eventsWithIdentifiers:(id)a1;
- (BOOL)updateWithValue:(id)a0 isFinal:(BOOL)a1 error:(id *)a2;
- (BOOL)ensureUpdated:(id *)a0;

@end
