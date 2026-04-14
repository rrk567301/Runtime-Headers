@class NSArray, NSMutableArray;

@interface TextColumn : NSObject

@property (retain, nonatomic) NSMutableArray *mutableRows;
@property (readonly, retain, nonatomic) NSArray *rows;
@property (readonly) unsigned long long rowCount;

- (void).cxx_destruct;
- (id)init;
- (void)addRow:(id)a0;
- (id)initWithRows:(id)a0;
- (void)sortRowsInAscendingOrder;

@end
