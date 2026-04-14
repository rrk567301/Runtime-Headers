@class NSMutableSet;

@interface PIEFlags : NSObject {
    NSMutableSet *_flagKeys;
    NSMutableSet *_flags;
}

- (void)setFlag:(long long)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isFlagSet:(long long)a0;
- (BOOL)unsetFlag:(long long)a0;

@end
