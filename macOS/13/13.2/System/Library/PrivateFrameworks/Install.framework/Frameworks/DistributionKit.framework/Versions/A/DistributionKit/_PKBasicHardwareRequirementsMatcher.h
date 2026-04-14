@interface _PKBasicHardwareRequirementsMatcher : NSObject

+ (void)initialize;
+ (id)_validSysctlPrefixes;
+ (BOOL)_sysctlPrefixIsValidForKeyPath:(id)a0;

- (id)valueForKeyPath:(id)a0;

@end
