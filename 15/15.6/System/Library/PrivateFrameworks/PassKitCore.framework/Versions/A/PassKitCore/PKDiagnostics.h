@interface PKDiagnostics : NSObject

+ (id)_allPasses;
+ (void)_createDiagnosticJsonWithDictionary:(id)a0 hasLibrary:(char)a1 completion:(id /* block */)a2;
+ (id)_metadataForCardAtURL:(id)a0;
+ (id)_secureElementData;
+ (void)generateDiagnosticsPackageWithPassLibrary:(char)a0 completion:(id /* block */)a1;
+ (id)generateUbiquityDiagnosticsFile:(char)a0;
+ (void)generateZippedDiagnosticsPackageWithPassLibrary:(char)a0 completion:(id /* block */)a1;
+ (void)saveTransitState:(id)a0 forPaymentApplication:(id)a1;

@end
