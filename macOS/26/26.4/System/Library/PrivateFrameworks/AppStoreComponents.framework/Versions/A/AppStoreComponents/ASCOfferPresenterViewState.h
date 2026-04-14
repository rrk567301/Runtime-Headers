@class ASCOfferTheme, ASCOfferMetadata;

@interface ASCOfferPresenterViewState : NSObject <NSCopying>

@property (readonly, copy, nonatomic) ASCOfferMetadata *metadata;
@property (readonly, copy, nonatomic) ASCOfferTheme *theme;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMetadata:(id)a0 theme:(id)a1;

@end
