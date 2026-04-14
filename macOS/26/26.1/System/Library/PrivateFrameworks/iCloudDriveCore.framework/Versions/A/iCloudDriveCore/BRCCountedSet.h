@interface BRCCountedSet : NSCountedSet {
    unsigned long long _totalCount;
}

- (void)removeObject:(id)a0;
- (unsigned long long)totalCount;
- (void)addObject:(id)a0;

@end
