@class NSSet, NSMutableSet;

@interface BSCopyingCacheSet : NSObject {
    NSMutableSet *_mutable;
    NSSet *_immutable;
}

@property (readonly) unsigned long long count;

- (id)description;
- (void).cxx_destruct;
- (char)containsObject:(id)a0;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (id)immutableSet;

@end
