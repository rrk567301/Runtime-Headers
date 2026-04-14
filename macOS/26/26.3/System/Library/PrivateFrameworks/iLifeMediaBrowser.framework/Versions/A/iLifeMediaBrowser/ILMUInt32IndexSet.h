@class NSMutableIndexSet;

@interface ILMUInt32IndexSet : NSObject {
    NSMutableIndexSet *mLowIndexSet;
    NSMutableIndexSet *mMidIndexSet;
    NSMutableIndexSet *mHighIndexSet;
}

+ (id)indexSet;

- (unsigned long long)count;
- (void)addIndex:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (BOOL)containsIndex:(unsigned long long)a0;

@end
