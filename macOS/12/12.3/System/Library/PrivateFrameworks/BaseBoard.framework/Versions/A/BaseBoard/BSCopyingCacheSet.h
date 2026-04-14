@class NSSet, NSMutableSet;

@interface BSCopyingCacheSet : NSObject {
    NSMutableSet *_mutable;
    NSSet *_immutable;
}

@property (readonly) unsigned long long count;

- (id)description;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (id)immutableSet;

@end
