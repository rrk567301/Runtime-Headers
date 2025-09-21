@class NSError, NSMutableArray, NSString;
@protocol WBSExtensionsImporterDelegate;

@interface WBSExtensionsImporter : NSObject <WBSJSONReaderDelegate> {
    NSError *_lastError;
    NSMutableArray *_stack;
    char _foundExtensionsArray;
    NSString *_composedIdentifier;
    NSString *_developerName;
    NSString *_displayName;
    NSString *_adamIdentifier;
    NSString *_alternatePlatformAppBundleIdentifier;
    NSString *_alternatePlatformExtensionBundleIdentifier;
}

@property (weak, nonatomic) id<WBSExtensionsImporterDelegate> delegate;

- (void).cxx_destruct;
- (char)_checkNotAtRootLevel;
- (char)_isParsingExtension;
- (char)_isParsingExtensionsArray;
- (id)_popKeyFromStackIfPossible;
- (char)jsonReader:(id)a0 appendKey:(id)a1;
- (char)jsonReader:(id)a0 error:(id)a1;
- (char)jsonReader:(id)a0 scalarValue:(id)a1;
- (char)jsonReaderBeginArray:(id)a0;
- (char)jsonReaderBeginObject:(id)a0;
- (char)jsonReaderEndArray:(id)a0;
- (char)jsonReaderEndObject:(id)a0;
- (void)parseFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)parseURL:(id)a0 completionHandler:(id /* block */)a1;

@end
