@class NSString, ASCOfferMetadata;

@interface ASCAppOfferSavedState : NSObject

@property (readonly, copy, nonatomic) NSString *state;
@property (readonly, copy, nonatomic) ASCOfferMetadata *metadata;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) char isLoadingFullState;
@property (readonly, nonatomic) char isActionable;

- (void).cxx_destruct;
- (id)initWithState:(id)a0 metadata:(id)a1 flags:(long long)a2;

@end
