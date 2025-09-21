@class NSSet;

@interface NSConcretePortCoder : NSPortCoder {
    NSSet *allowlist;
}

- (void)dealloc;
- (char)_classAllowed:(Class)a0;
- (void)_setAllowList:(id)a0;

@end
