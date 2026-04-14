@class NSIndexSet;

@interface ICScannerFunctionalUnitPositiveTransparency : ICScannerFunctionalUnit {
    id _ptrProps;
}

@property (readonly) NSIndexSet *supportedDocumentTypes;
@property unsigned long long documentType;
@property (readonly) struct CGSize { double x0; double x1; } documentSize;

- (void)dealloc;
- (id)description;
- (id)valueForUndefinedKey:(id)a0;
- (id)currentSettings;
- (id)initWithDictionary:(id)a0 andScanner:(id)a1;
- (id)colorSyncModeForRGBOverview;
- (id)colorSyncModeForGrayOverview;

@end
