@class NSString, MPModelGenericObject;

@interface MPCSharedListeningReactionEvent : NSObject

@property (readonly, copy, nonatomic) NSString *reactionIdentifier;
@property (readonly, copy, nonatomic) NSString *reaction;
@property (readonly, nonatomic) MPModelGenericObject *item;

- (void).cxx_destruct;
- (id)description;
- (id)initWithReaction:(id)a0 reactionIdentifier:(id)a1 item:(id)a2;

@end
