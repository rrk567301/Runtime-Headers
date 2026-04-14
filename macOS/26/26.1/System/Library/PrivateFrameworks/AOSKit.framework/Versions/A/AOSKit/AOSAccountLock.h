@class NSString;

@interface AOSAccountLock : NSObject {
    NSString *_dsid;
    BOOL _isLocked;
}

+ (void)initialize;

- (void)unlock;
- (BOOL)lock;
- (void)dealloc;
- (id)initWithDSID:(id)a0;

@end
