@class NSMutableIndexSet;

@interface ILMUInt32IndexSet : NSObject {
    NSMutableIndexSet *mLowIndexSet;
    NSMutableIndexSet *mMidIndexSet;
    NSMutableIndexSet *mHighIndexSet;
}

+ (id)indexSet;

- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (void)addIndex:(unsigned long long)a0;
- (BOOL)containsIndex:(unsigned long long)a0;

@end
