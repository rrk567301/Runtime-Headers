@class ICNote, ICAccount, NSWindow;

@interface ICNoteLockManager : NSObject

@property (retain, nonatomic) ICNote *updatedNote;
@property (readonly, nonatomic) ICAccount *account;
@property (readonly, nonatomic) ICNote *note;
@property (readonly, nonatomic) NSWindow *window;

- (void).cxx_destruct;
- (id)initWithNote:(id)a0 window:(id)a1;
- (void)toggleLockWithCompletionHandler:(id /* block */)a0;
- (void)addLockWithCompletionHandler:(id /* block */)a0;
- (void)removeLockWithCompletionHandler:(id /* block */)a0;
- (void)unsafelyToggleLock;

@end
