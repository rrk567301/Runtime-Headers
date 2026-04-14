@interface CSVCredentialImportAlertController : NSObject

+ (void)displayAlertForFailedCSVImportWithError:(id)a0 window:(id)a1;
+ (void)displayAlertToFixImportConflictsAndErrorsWithNumberOfSuccessfullyImportedCredentials:(unsigned long long)a0 numberOfExtractedCredentials:(unsigned long long)a1 credentialsWithConflicts:(id)a2 credentialsWithErrors:(id)a3 window:(id)a4;
+ (void)displayAlertToDeleteCSVFileWithFile:(id)a0 numberSuccessfullyImported:(unsigned long long)a1 window:(id)a2;
+ (id)_messageTextForImportAlertWithNumberOfSuccessfullyImportedCredentials:(unsigned long long)a0 numberOfExtractedCredentials:(unsigned long long)a1 numberOfCredentialsWithConflicts:(unsigned long long)a2 numberOfCredentialsWithErrors:(unsigned long long)a3;

@end
