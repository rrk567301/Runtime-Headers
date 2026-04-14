@interface CSFSystemStatusMicAttributedTask : CSFSystemStatusAttributedTask

@property (retain, nonatomic) CSFSystemStatusMicAttributedTask *activeTask;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithTaskName:(id)a0 taskBundleIdentifier:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 taskExecutablePath:(id)a3 activeTask:(id)a4;

@end
