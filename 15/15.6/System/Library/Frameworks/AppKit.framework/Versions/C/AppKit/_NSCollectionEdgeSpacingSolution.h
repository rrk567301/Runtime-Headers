@interface _NSCollectionEdgeSpacingSolution : NSObject {
    char _isFlexible;
}

@property (nonatomic) double spacing;
@property (readonly, nonatomic) char isFlexible;

- (id)description;
- (id)initWithSpacing:(double)a0 isFlexible:(char)a1;

@end
