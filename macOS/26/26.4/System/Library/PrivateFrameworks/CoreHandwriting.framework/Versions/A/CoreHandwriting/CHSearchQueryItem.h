@class NSSet, NSDictionary;

@interface CHSearchQueryItem : NSObject {
    NSDictionary *_strokeBoundsByIdentifier;
}

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStrokeIdentifier:(id)a0;
- (BOOL)isEqualToSearchQueryItem:(id)a0;

@end
