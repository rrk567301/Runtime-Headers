@class NSNumber, NSMutableIndexSet;

@interface ICScannerFunctionalUnitDocumentFeederProps : NSObject

@property (retain, nonatomic) NSMutableIndexSet *supportedDocumentTypes;
@property (nonatomic) unsigned long long documentType;
@property (copy, nonatomic) NSNumber *duplexSupportLevel;
@property (nonatomic) char duplexScanningEnabled;
@property (nonatomic) char canDetectDocument;
@property (nonatomic) char documentLoaded;
@property (nonatomic) unsigned long long oddPageOrientation;
@property (nonatomic) unsigned long long evenPageOrientation;
@property (nonatomic) char reverseFeederPageOrder;
@property (nonatomic) unsigned long long justification;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
