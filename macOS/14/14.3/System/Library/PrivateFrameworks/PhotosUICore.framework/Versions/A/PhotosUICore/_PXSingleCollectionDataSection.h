@protocol PXDisplayCollection;

@interface _PXSingleCollectionDataSection : PXCollectionsDataSection {
    long long _count;
}

@property (readonly, nonatomic) id<PXDisplayCollection> displayCollection;
@property (readonly, nonatomic) unsigned long long lockState;

- (void).cxx_destruct;
- (long long)count;
- (id)objectAtIndex:(long long)a0;
- (long long)indexOfCollection:(id)a0;
- (id)initWithDisplayCollection:(id)a0;
- (id)initWithDisplayCollection:(id)a0 lockState:(unsigned long long)a1;
- (unsigned long long)lockStateForCollection:(id)a0;

@end
