@class NSString, NSMutableArray;
@protocol UIFocusEnvironment;

@interface _UIFocusTreeLockItem : NSObject {
    BOOL _didSoftAssert;
    BOOL _didCleanup;
    id<UIFocusEnvironment> _unsafeEnvironment;
    id /* block */ _finalUnlockHandler;
}

@property (readonly, weak, nonatomic) id<UIFocusEnvironment> environment;
@property (readonly, nonatomic) NSString *environmentDescription;
@property (readonly, nonatomic) unsigned long long lockCount;
@property (readonly, nonatomic) double lockTime;
@property (readonly, nonatomic) NSMutableArray *lockCallStackSymbols;
@property (readonly, nonatomic) NSMutableArray *unlockCallStackSymbols;

- (void)validate;
- (BOOL)unlock;
- (void).cxx_destruct;
- (id)description;
- (void)lock;
- (void)dealloc;
- (void)_cleanup:(BOOL)a0;
- (id)initWithEnvironment:(id)a0 finalUnlockHandler:(id /* block */)a1;

@end
