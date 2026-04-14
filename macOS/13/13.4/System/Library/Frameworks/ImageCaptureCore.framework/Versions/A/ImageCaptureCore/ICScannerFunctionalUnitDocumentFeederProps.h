@class NSNumber, NSMutableIndexSet;

@interface ICScannerFunctionalUnitDocumentFeederProps : NSObject

@property (retain) NSMutableIndexSet *supportedDocumentTypes;
@property unsigned long long documentType;
@property (copy) NSNumber *duplexSupportLevel;
@property BOOL duplexScanningEnabled;
@property BOOL canDetectDocument;
@property BOOL documentLoaded;
@property unsigned long long oddPageOrientation;
@property unsigned long long evenPageOrientation;
@property BOOL reverseFeederPageOrder;
@property unsigned long long justification;

- (void)dealloc;
- (id)initWithDictionary:(id)a0;

@end
