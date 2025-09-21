@interface WFMissingAction : WFAction

@property (nonatomic) BOOL isForLocalization;

- (id)iconImage;
- (id)localizedNameWithContext:(id)a0;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (BOOL)inputPassthrough;
- (BOOL)requiresRemoteExecution;
- (BOOL)isMissing;
- (id)localizedDescriptionSummary;

@end
