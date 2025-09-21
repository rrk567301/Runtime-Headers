@interface _NSCollectionEdgeSpacingSolution : NSObject {
    BOOL _isFlexible;
}

@property (nonatomic) double spacing;
@property (readonly, nonatomic) BOOL isFlexible;

- (id)initWithSpacing:(double)a0 isFlexible:(BOOL)a1;
- (id)description;

@end
