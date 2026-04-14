@class NSString, NSMutableArray;
@protocol EDIndexableItem;

@interface EDSearchableIndexPendingItem : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<EDIndexableItem> referenceItem;
@property (readonly, nonatomic) unsigned long long estimatedSizeInBytes;
@property (readonly, nonatomic) BOOL requiresPreprocessing;

- (id)initWithItem:(id)a0;
- (void)addItem:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)addPendingItem:(id)a0;

@end
