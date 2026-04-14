@class NSSet;

@interface NSConcretePortCoder : NSPortCoder {
    NSSet *allowlist;
}

- (void)dealloc;
- (void)_setAllowList:(id)a0;
- (BOOL)_classAllowed:(Class)a0;

@end
