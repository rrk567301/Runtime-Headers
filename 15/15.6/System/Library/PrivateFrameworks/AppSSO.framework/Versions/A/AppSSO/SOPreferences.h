@interface SOPreferences : NSObject

@property (class, readonly, nonatomic) char isExtensionSignatureValidated;
@property (class, readonly, nonatomic) char isAssociatedDomainValidated;

+ (char)boolValueForKey:(struct __CFString { } *)a0 defaultValue:(char)a1;

@end
