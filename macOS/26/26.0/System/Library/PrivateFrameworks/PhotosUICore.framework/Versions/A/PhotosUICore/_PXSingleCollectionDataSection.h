@class NSString;
@protocol PXDisplayCollection;

@interface _PXSingleCollectionDataSection : PXCollectionsDataSection {
    unsigned long long _enumerationMutations;
    id<PXDisplayCollection> _collectionArray[1];
    long long _count;
}

@property (readonly, nonatomic) id<PXDisplayCollection> displayCollection;
@property (readonly, nonatomic) unsigned long long lockState;
@property (readonly, nonatomic) NSString *accessoryTitle;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (long long)count;
- (void).cxx_destruct;
- (id)objectAtIndex:(long long)a0;
- (id)accessoryTitleForCollection:(id)a0;
- (long long)indexOfCollection:(id)a0;
- (id)initWithDisplayCollection:(id)a0 accessoryTitle:(id)a1 lockState:(unsigned long long)a2 outlineObject:(id)a3;
- (unsigned long long)lockStateForCollection:(id)a0;

@end
