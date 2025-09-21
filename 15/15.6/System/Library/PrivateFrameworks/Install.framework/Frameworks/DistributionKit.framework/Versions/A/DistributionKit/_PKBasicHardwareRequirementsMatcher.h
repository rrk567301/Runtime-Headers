@interface _PKBasicHardwareRequirementsMatcher : NSObject

+ (void)initialize;
+ (char)_sysctlPrefixIsValidForKeyPath:(id)a0;
+ (id)_validSysctlPrefixes;

- (id)valueForKeyPath:(id)a0;

@end
