@class NSMutableDictionary, NSString, NSError, NSMutableArray;
@protocol WBSExtensionsImporterDelegate;

@interface WBSChromeExtensionsImporter : NSObject <WBSJSONReaderDelegate> {
    NSError *_lastError;
    NSMutableArray *_stack;
    char _foundExtensionsArray;
    NSMutableDictionary *_browserExtensionMapping;
    NSString *_chromeExtensionIdentifier;
}

@property (weak, nonatomic) id<WBSExtensionsImporterDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (char)_checkNotAtRootLevel;
- (char)_isParsingExtension;
- (char)_isParsingExtensionsArray;
- (char)_openBrowserExtensionMappingJSONFile;
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
