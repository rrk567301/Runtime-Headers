@class NSString;

@interface AOSAccountLock : NSObject {
    NSString *_dsid;
    char _isLocked;
}

+ (void)initialize;

- (void)dealloc;
- (char)lock;
- (void)unlock;
- (id)initWithDSID:(id)a0;

@end
