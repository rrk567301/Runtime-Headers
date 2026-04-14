@class NSNumber, NSMutableIndexSet;

@interface ICScannerFunctionalUnitDocumentFeederProps : NSObject

@property (retain, nonatomic) NSMutableIndexSet *supportedDocumentTypes;
@property (nonatomic) unsigned long long documentType;
@property (copy, nonatomic) NSNumber *duplexSupportLevel;
@property (nonatomic) BOOL duplexScanningEnabled;
@property (nonatomic) BOOL canDetectDocument;
@property (nonatomic) BOOL documentLoaded;
@property (nonatomic) unsigned long long oddPageOrientation;
@property (nonatomic) unsigned long long evenPageOrientation;
@property (nonatomic) BOOL reverseFeederPageOrder;
@property (nonatomic) unsigned long long justification;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
