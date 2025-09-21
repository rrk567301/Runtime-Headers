@class NSString, NSMutableArray;
@protocol EDIndexableItem;

@interface EDSearchableIndexPendingItem : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<EDIndexableItem> referenceItem;
@property (readonly, nonatomic) unsigned long long estimatedSizeInBytes;
@property (readonly, nonatomic) char requiresPreprocessing;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)addItem:(id)a0;
- (id)initWithItem:(id)a0;
- (void)addPendingItem:(id)a0;

@end
