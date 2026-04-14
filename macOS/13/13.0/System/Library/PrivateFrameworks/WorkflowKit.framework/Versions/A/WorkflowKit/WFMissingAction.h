@interface WFMissingAction : WFAction

@property (nonatomic) BOOL isForLocalization;

- (id)name;
- (id)descriptionDictionary;
- (id)iconImage;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (BOOL)requiresRemoteExecution;
- (BOOL)inputPassthrough;
- (BOOL)isMissing;

@end
