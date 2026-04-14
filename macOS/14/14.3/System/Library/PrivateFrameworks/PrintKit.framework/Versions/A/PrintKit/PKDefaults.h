@interface PKDefaults : NSObject

+ (id)absoluteSpoolDirectory;
+ (void)addLastUsedPrinter:(id)a0 duplexMode:(id)a1 lastUsedSize:(struct CGSize { double x0; double x1; })a2 forPhoto:(BOOL)a3;
+ (BOOL)airPrintBeaconDiscoveryAllowed;
+ (BOOL)ippsIsRequired;
+ (id)lastUsedPrinters;
+ (void)lastUsedPrintersCompletionHandler:(id /* block */)a0;
+ (id)lastUsedPrintersForPhoto:(BOOL)a0;
+ (void)lastUsedPrintersForPhoto:(BOOL)a0 completionHandler:(id /* block */)a1;
+ (BOOL)mcProfilePrintersOnlyAllowed;
+ (id)requiredPDL;
+ (BOOL)urfIsOptional;
+ (BOOL)uriMatchesMCProfileAdded:(id)a0;

@end
