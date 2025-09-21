@class NSArray, NSDictionary, ASCOfferMetadata, NSString, NSNumber, ASCAdamID;

@interface ASCLocalOffer : NSObject <ASCOffer, NSCopying>

@property (readonly, nonatomic) ASCOfferMetadata *metadata;
@property (readonly, copy, nonatomic) id /* block */ action;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, copy, nonatomic) NSDictionary *titles;
@property (readonly, copy, nonatomic) NSDictionary *subtitles;
@property (readonly, nonatomic) long long flags;
@property (readonly, nonatomic) NSNumber *ageRating;
@property (readonly, nonatomic) NSArray *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)price;
- (id)formattedPrice;
- (id)initWithMetadata:(id)a0 action:(id /* block */)a1;
- (id)offerWithMetrics:(id)a0;

@end
