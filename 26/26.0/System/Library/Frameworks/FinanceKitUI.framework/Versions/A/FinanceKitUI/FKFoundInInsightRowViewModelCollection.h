@class NSArray;

@interface FKFoundInInsightRowViewModelCollection : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *mailItemRowViewModels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMailItemsRowViewModels:(id)a0;

@end
