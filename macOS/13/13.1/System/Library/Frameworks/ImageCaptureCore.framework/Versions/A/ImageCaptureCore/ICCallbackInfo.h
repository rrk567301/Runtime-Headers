@interface ICCallbackInfo : NSObject

@property (retain) id delegate;
@property (retain) id cmdObj;
@property unsigned long long sessionID;
@property SEL selector;
@property void *info;
@property id /* block */ failureBlock;

- (void)dealloc;
- (id)init;

@end
