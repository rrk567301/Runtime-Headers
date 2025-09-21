@class NSError;

@interface FPDIterator : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long numFoldersPopped;
@property (readonly, nonatomic) char done;
@property (nonatomic) char skipMaterializedTreeTraversal;
@property (nonatomic) char shouldDecorateItems;

+ (id)hybridIteratorForItem:(id)a0 domain:(id)a1 enforceFPItem:(char)a2;
+ (id)iteratorForLocator:(id)a0 manager:(id)a1;
+ (id)iteratorForLocator:(id)a0 provider:(id)a1;
+ (id)iteratorForLocator:(id)a0 wantsDisk:(char)a1 provider:(id)a2;

- (void).cxx_destruct;
- (id)nextItem;
- (id)nextWithError:(id *)a0;

@end
