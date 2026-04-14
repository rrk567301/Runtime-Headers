@class NSMutableDictionary;

@interface _NSOrderedCollectionDifferenceMoves : NSObject {
    NSMutableDictionary *_removeDict;
    NSMutableDictionary *_insertDict;
    unsigned long long _firstRemove;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
