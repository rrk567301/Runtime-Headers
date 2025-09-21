@interface WFMissingAction : WFAction

@property (nonatomic) char isForLocalization;

- (id)localizedNameWithContext:(id)a0;
- (id)iconImage;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (char)inputPassthrough;
- (char)requiresRemoteExecution;
- (id)localizedDescriptionSummary;
- (char)isMissing;

@end
