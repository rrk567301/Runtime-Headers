@interface ICCallbackInfo : NSObject

@property (retain) id delegate;
@property (retain) id cmdObj;
@property unsigned long long sessionID;
@property SEL selector;
@property void *info;
@property (copy) id /* block */ failureBlock;

- (void).cxx_destruct;
- (id)init;

@end
