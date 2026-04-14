@class NSSet, NSMutableSet;

@interface BSCopyingCacheSet : NSObject {
    NSMutableSet *_mutable;
    NSSet *_immutable;
}

@property (readonly) unsigned long long count;

- (void)removeObject:(id)a0;
- (id)immutableSet;
- (void)addObject:(id)a0;
- (id)description;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;

@end
