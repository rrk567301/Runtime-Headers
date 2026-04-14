@class NSMutableArray;

@interface CNGroupListEntriesFactory : ABAbstractGroupEntriesFactory {
    NSMutableArray *_sections;
}

- (void).cxx_destruct;
- (id)init;
- (void)addSection:(id)a0;
- (id)makeGroupEntries;
- (id)makeGroupEntriesWithHidingPolicy:(id)a0;

@end
