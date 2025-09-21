@class NSMutableDictionary;

@interface _NSOrderedCollectionDifferenceMoves : NSObject {
    NSMutableDictionary *_removeDict;
    NSMutableDictionary *_insertDict;
    unsigned long long _firstRemove;
}

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;

@end
