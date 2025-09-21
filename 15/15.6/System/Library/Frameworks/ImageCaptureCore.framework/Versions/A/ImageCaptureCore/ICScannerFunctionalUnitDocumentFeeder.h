@class NSIndexSet;

@interface ICScannerFunctionalUnitDocumentFeeder : ICScannerFunctionalUnit {
    id _dfProps;
}

@property (readonly) char canDetectDocument;
@property char documentLoaded;
@property (readonly) unsigned long long justification;
@property (readonly) NSIndexSet *supportedDocumentTypes;
@property unsigned long long documentType;
@property (readonly) struct CGSize { double x0; double x1; } documentSize;
@property (readonly) char supportsDuplexScanning;
@property char duplexScanningEnabled;
@property unsigned long long oddPageOrientation;
@property unsigned long long evenPageOrientation;
@property (readonly) char reverseFeederPageOrder;

- (id)description;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)currentSettings;
- (id)colorSyncProfilePath;
- (id)initWithDictionary:(id)a0 andScanner:(id)a1;
- (void)setDuplexSupportLevel:(id)a0;

@end
