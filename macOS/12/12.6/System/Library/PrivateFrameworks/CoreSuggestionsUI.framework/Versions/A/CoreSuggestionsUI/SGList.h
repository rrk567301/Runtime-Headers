@class NSMutableArray;
@protocol SGListDelegate;

@interface SGList : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (weak, nonatomic) id<SGListDelegate> delegate;
@property (copy, nonatomic) id /* block */ comparator;

- (id)init;
- (unsigned long long)count;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)addItem:(id)a0;
- (BOOL)removeItem:(id)a0;
- (void)removeAllItems;
- (unsigned long long)indexOfItem:(id)a0;
- (id)items;

@end
