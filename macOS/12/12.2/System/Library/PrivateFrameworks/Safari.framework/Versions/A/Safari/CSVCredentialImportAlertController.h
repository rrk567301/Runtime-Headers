@interface CSVCredentialImportAlertController : NSObject

+ (void)displayAlertForFailedCSVImportWithError:(id)a0 window:(id)a1;
+ (void)displayAlertToFixImportConflictsAndErrorsWithNumberOfSuccessfullyImportedCredentials:(unsigned long long)a0 credentialsWithConflicts:(id)a1 credentialsWithErrors:(id)a2 window:(id)a3;
+ (void)displayAlertToDeleteCSVFileWithFile:(id)a0 numberSuccessfullyImported:(unsigned long long)a1 window:(id)a2;
+ (id)_messageTextForImportAlertWithNumberOfSuccessfullyImportedCredentials:(unsigned long long)a0 numberOfCredentialsWithConflicts:(unsigned long long)a1 numberOfCredentialsWithErrors:(unsigned long long)a2;

@end
