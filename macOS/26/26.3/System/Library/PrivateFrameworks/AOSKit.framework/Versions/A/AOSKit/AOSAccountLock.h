@class NSString;

@interface AOSAccountLock : NSObject {
    NSString *_dsid;
    BOOL _isLocked;
}

+ (void)initialize;

- (id)initWithDSID:(id)a0;
- (void)unlock;
- (BOOL)lock;
- (void)dealloc;

@end
