@class NSString;
@protocol MIFilesystemScannerDelegate;

@interface MIFilesystemScanner : NSObject

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (weak, nonatomic) id<MIFilesystemScannerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (char)_scanAppsDirectory:(id)a0 withError:(id *)a1;
- (char)_scanBundleContainersWithClass:(unsigned long long)a0 withError:(id *)a1 ignoredErrorOccurredOnOneOrMoreItems:(char *)a2;
- (char)_scanExtensionKitDirectory:(id)a0 withError:(id *)a1;
- (char)_scanExtensionKitLocations:(id)a0 withError:(id *)a1;
- (char)_scanFrameworkDirectory:(id)a0 withError:(id *)a1;
- (char)_scanFrameworksLocationsWithError:(id *)a0;
- (id)builtInExtensionKitExtensionsDirectories;
- (id)initWithScanOptions:(unsigned long long)a0;
- (id)initWithScanOptions:(unsigned long long)a0 personaUniqueString:(id)a1;
- (char)performScanWithError:(id *)a0;

@end
