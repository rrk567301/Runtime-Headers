@class NSString;

@interface CSFSystemStatusAttributedTask : NSObject

@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSString *taskBundleIdentifier;
@property (readonly, nonatomic) NSString *taskExecutablePath;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;

- (void).cxx_destruct;
- (id)initWithTaskName:(id)a0 taskBundleIdentifier:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 taskExecutablePath:(id)a3;

@end
