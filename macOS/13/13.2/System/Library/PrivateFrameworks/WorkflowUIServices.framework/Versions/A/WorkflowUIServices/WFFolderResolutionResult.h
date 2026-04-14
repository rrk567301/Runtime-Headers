@interface WFFolderResolutionResult : INObjectResolutionResult

+ (BOOL)supportsSecureCoding;
+ (id)successWithResolvedFolder:(id)a0;
+ (id)disambiguationWithFoldersToDisambiguate:(id)a0;
+ (id)confirmationRequiredWithFolderToConfirm:(id)a0;

@end
