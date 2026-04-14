@class NSString;

@interface AOSAccountLock : NSObject {
    NSString *_dsid;
    BOOL _isLocked;
}

+ (void)initialize;

- (void)unlock;
- (id)initWithDSID:(id)a0;
- (BOOL)lock;
- (void)dealloc;

@end
