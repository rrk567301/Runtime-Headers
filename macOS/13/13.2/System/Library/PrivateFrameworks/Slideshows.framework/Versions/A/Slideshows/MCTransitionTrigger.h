@class NSString, NSMutableDictionary;

@interface MCTransitionTrigger : MCAction <MCTransitionTrigger>

@property (copy) NSString *transitionDestinationPlugID;
@property (copy) NSString *transitionID;
@property (nonatomic) double transitionDuration;
@property (copy, nonatomic) NSMutableDictionary *transitionAttributes;

+ (id)transitionForTargetPlugObjectID:(id)a0 withTransitionID:(id)a1;

- (id)description;
- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)a0;
- (void)demolish;
- (void)_copySelfToSnapshot:(id)a0;

@end
