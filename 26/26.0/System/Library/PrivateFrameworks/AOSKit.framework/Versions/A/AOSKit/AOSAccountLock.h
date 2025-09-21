@class NSString;

@interface AOSAccountLock : NSObject {
    NSString *_dsid;
    BOOL _isLocked;
}

+ (void)initialize;

- (void)unlock;
- (void)dealloc;
- (BOOL)lock;
- (id)initWithDSID:(id)a0;

@end
