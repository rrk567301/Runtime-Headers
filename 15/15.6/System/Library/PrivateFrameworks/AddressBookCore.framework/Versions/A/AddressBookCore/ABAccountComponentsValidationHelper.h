@class NSString, ABAccountComponents;
@protocol ABAccountComponentFileValidator;

@interface ABAccountComponentsValidationHelper : NSObject <ABAccountComponentValidationHelper> {
    ABAccountComponents *_components;
    id<ABAccountComponentFileValidator> _fileManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;

- (void).cxx_destruct;
- (id)className;
- (id)accountName;
- (char)accountIsInvalidBecauseFolderDoesNotExist;
- (id)initWithAccountComponents:(id)a0;
- (id)initWithAccountComponents:(id)a0 fileManager:(id)a1;
- (char)isAccountComponentsValid;
- (void)makeSureSourceFolderExists;
- (char)probablyInUnitTests;
- (char)shouldMakeSureSourceFolderExists;

@end
