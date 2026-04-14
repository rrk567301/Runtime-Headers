@interface EDDisplayNameGroupingTrie : NSObject {
    void /* unknown type, empty encoding */ root;
}

- (id)init;
- (void).cxx_destruct;
- (long long)count;
- (id)findGroups;
- (void)insertDisplayName:(id)a0 addressID:(id)a1;
- (void)insertDisplayNameAndIDPairs:(id)a0;

@end
