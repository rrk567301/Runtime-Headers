@class NSSet, NSDictionary;

@interface CHSearchQueryItem : NSObject {
    NSDictionary *_strokeBoundsByIdentifier;
}

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStrokeIdentifier:(id)a0;
- (char)isEqualToSearchQueryItem:(id)a0;

@end
