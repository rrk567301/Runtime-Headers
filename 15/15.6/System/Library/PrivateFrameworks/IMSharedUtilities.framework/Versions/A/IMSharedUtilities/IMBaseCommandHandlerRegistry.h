@class NSDictionary, NSMutableDictionary;

@interface IMBaseCommandHandlerRegistry : NSObject

@property (readonly, nonatomic) NSDictionary *handlers;
@property (readonly, nonatomic) NSMutableDictionary *standardHandlers;
@property (readonly, nonatomic, getter=isLockedDown) char lockedDown;
@property (readonly, nonatomic) NSMutableDictionary *lockdownHandlers;

- (id)init;
- (void).cxx_destruct;
- (char)canAddCommand:(id)a0;
- (id)handlerForCommand:(id)a0;
- (char)hasHandlerForCommand:(id)a0;
- (char)hasLockdownHandlerForCommand:(id)a0;
- (id)noopHandlerForCommand:(id)a0;
- (void)setLockdownHandler:(id)a0 forCommand:(id)a1;
- (void)setPassThroughLockdownHandlerForCommand:(id)a0;
- (void)setStandardHandler:(id)a0 forCommand:(id)a1;

@end
