@class NSCollectionLayoutSize;

@interface _NSCollectionPreferredSize : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } originalSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fittingSize;
@property (readonly, nonatomic) NSCollectionLayoutSize *layoutSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredSize;

- (id)description;
- (void).cxx_destruct;
- (id)initWithOriginalSize:(struct CGSize { double x0; double x1; })a0 fittingSize:(struct CGSize { double x0; double x1; })a1 layoutSize:(id)a2;

@end
