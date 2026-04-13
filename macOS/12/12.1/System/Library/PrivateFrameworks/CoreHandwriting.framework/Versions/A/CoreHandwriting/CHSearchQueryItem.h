@class NSSet;

@interface CHSearchQueryItem : NSObject

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithStrokeIdentifiers:(id)a0;
- (BOOL)isEqualToSearchQueryItem:(id)a0;

@end
