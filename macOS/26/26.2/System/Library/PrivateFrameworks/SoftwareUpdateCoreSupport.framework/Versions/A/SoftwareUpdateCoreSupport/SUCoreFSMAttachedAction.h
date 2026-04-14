@class NSString;

@interface SUCoreFSMAttachedAction : NSObject

@property (readonly, retain, nonatomic) NSString *fsmAction;
@property (readonly, weak, nonatomic) id actionDelegate;
@property (readonly, retain, nonatomic) Class eventInfoClass;

- (id)initWithAction:(id)a0 usingDelegate:(id)a1 withInfoClass:(Class)a2;
- (void).cxx_destruct;
- (id)description;

@end
