@class NSSet, NSString;

@interface CHPrefixQueryItem : NSObject

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, retain, nonatomic) NSString *queryResult;
@property (readonly, nonatomic) const struct CGPath { } *estimatedBaseline;

- (void)dealloc;
- (id)initWithStrokeIdentifiers:(id)a0 queryResult:(id)a1 estimatedBaseline:(struct CGPath { } *)a2;
- (BOOL)isEqualToPrefixQueryItem:(id)a0;

@end
