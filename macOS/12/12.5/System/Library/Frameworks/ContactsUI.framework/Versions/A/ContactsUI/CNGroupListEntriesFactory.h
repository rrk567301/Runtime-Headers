@class NSMutableArray;

@interface CNGroupListEntriesFactory : ABAbstractGroupEntriesFactory {
    NSMutableArray *_sections;
}

- (id)init;
- (void).cxx_destruct;
- (void)addSection:(id)a0;
- (id)makeGroupEntriesWithHidingPolicy:(id)a0;
- (id)makeGroupEntries;

@end
