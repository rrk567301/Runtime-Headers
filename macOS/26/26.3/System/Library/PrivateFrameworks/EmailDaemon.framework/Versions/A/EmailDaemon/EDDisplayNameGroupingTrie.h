@interface EDDisplayNameGroupingTrie : NSObject {
    void /* unknown type, empty encoding */ root;
}

@property (nonatomic, readonly) long long count;

+ (BOOL)displayName:(id)a0 isTokenizedPrefixOfName:(id)a1 outError:(id *)a2;

- (id)init;
- (id)findGroups;
- (void).cxx_destruct;
- (void)insertDisplayName:(id)a0 addressID:(id)a1;
- (void)insertDisplayNameAndIDPairs:(id)a0;

@end
