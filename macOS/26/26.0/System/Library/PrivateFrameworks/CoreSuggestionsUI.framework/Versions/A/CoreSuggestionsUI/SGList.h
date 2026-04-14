@class NSMutableArray;
@protocol SGListDelegate;

@interface SGList : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (weak, nonatomic) id<SGListDelegate> delegate;
@property (copy, nonatomic) id /* block */ comparator;

- (BOOL)removeItem:(id)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)items;
- (BOOL)addItem:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)count;
- (id)init;
- (void)removeAllItems;
- (void).cxx_destruct;
- (unsigned long long)indexOfItem:(id)a0;

@end
