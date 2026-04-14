@class NSMutableIndexSet;

@interface ILMUInt32IndexSet : NSObject {
    NSMutableIndexSet *mLowIndexSet;
    NSMutableIndexSet *mMidIndexSet;
    NSMutableIndexSet *mHighIndexSet;
}

+ (id)indexSet;

- (void)addIndex:(unsigned long long)a0;
- (id)init;
- (unsigned long long)count;
- (void)dealloc;
- (BOOL)containsIndex:(unsigned long long)a0;

@end
