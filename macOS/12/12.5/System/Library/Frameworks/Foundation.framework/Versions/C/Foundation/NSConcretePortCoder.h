@class NSSet;

@interface NSConcretePortCoder : NSPortCoder {
    NSSet *whitelist;
}

- (void)dealloc;
- (void)_setWhitelist:(id)a0;
- (BOOL)_classAllowed:(Class)a0;

@end
