@class NSIndexSet;

@interface ICScannerFunctionalUnitNegativeTransparency : ICScannerFunctionalUnit {
    id _ntrProps;
}

@property (readonly) NSIndexSet *supportedDocumentTypes;
@property unsigned long long documentType;
@property (readonly) struct CGSize { double x0; double x1; } documentSize;

- (id)valueForUndefinedKey:(id)a0;
- (id)description;
- (id)currentSettings;
- (void).cxx_destruct;
- (id)colorSyncModeForGrayOverview;
- (id)colorSyncModeForRGBOverview;
- (id)colorSyncProfilePath;
- (id)initWithDictionary:(id)a0 andScanner:(id)a1;

@end
