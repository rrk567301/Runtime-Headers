@interface ABActionAutovalidatorCacheMenuEntry : ABActionAutovalidatorCacheEntry {
    SEL _selector;
}

- (id)initWithSelector:(SEL)a0;
- (id)description;
- (BOOL)validateMenuItem:(id)a0 withTarget:(id)a1;

@end
