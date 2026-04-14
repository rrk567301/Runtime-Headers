@class NSImage, NSString, NSMutableDictionary, NSArray, NSBundle, NSObject, NSNumberFormatter;
@protocol SPDocumentDelegate;

@interface SPDocument : NSDocument {
    NSMutableDictionary *_systemProfileDictionary;
    NSMutableDictionary *_dataTypes;
    NSMutableDictionary *_detailLevelsForDataTypes;
    BOOL _loadedFromFile;
    int _detailLevel;
    int _maximumDetailLevel;
    NSArray *_localizableUnits;
    NSBundle *_frameworkBundle;
    NSNumberFormatter *_englishNumberFormatter;
    NSImage *_modelIcon;
}

@property double timeout;
@property (weak) NSObject<SPDocumentDelegate> *delegate;
@property (copy) NSString *selectedDataType;

- (id)init;
- (void).cxx_destruct;
- (id)serialNumber;
- (BOOL)readFromURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)dataOfType:(id)a0 error:(id *)a1;
- (void)saveToURL:(id)a0 ofType:(id)a1 forSaveOperation:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)printOperationWithSettings:(id)a0 error:(id *)a1;
- (void)makeWindowControllers;
- (id)writableTypesForSaveOperation:(unsigned long long)a0;
- (id)modelName;
- (id)jsonRepresentation;
- (id)dataTypes;
- (id)computerName;
- (id)modelIcon;
- (void)setDetailLevel:(int)a0;
- (int)detailLevel;
- (int)maximumDetailLevel;
- (void)obscureBluetoothNames:(id)a0;
- (void)_enforceDetailLevelForPlist:(id)a0 usingProperties:(id)a1;
- (void)_addDataType:(id)a0 parent:(id)a1 detailLevel:(int)a2;
- (id)dataTypesWithParent:(id)a0;
- (id)parentOfDataType:(id)a0;
- (id)propertiesForDataType:(id)a0;
- (id)orderedIdentifiersForItem:(id)a0 dataType:(id)a1;
- (id)_setReport:(id)a0 forDataType:(id)a1;
- (id)_reportFromBundlesForDataType:(id)a0;
- (void)_reportFromBundlesForDataType:(id)a0 completionHandler:(id /* block */)a1;
- (void)_reportFromHelperToolForDataType:(id)a0 completionHandler:(id /* block */)a1;
- (id)reportForDataType:(id)a0;
- (id)reportsForDataTypes:(id)a0;
- (void)refreshReportForDataType:(id)a0;
- (void)refreshReports;
- (BOOL)shouldUseRightToLeftLayout;
- (id)localizedStringForKey:(id)a0 dataType:(id)a1;
- (id)localizedDescriptionForObject:(id)a0 dataType:(id)a1;
- (id)_attributedStringForItem:(id)a0 dataType:(id)a1 indentation:(float)a2 isUnit:(BOOL)a3;
- (id)attributedStringForItem:(id)a0 dataType:(id)a1;
- (id)_stringForItem:(id)a0 dataType:(id)a1 indentation:(int)a2 isUnit:(BOOL)a3;
- (id)stringForItem:(id)a0 dataType:(id)a1;
- (id)reportHeader;
- (id)attributedStringForDataTypes:(id)a0;
- (id)stringForDataTypes:(id)a0;
- (id)_xmlPropertyListRepresentationForArray:(id)a0;
- (id)xmlPropertyListRepresentationForDataTypes:(id)a0;
- (id)xmlPropertyListRepresentation;
- (id)plainTextRepresentationForDataTypes:(id)a0;
- (id)plainTextRepresentation;
- (id)richTextRepresentationForDataTypes:(id)a0;
- (id)richTextRepresentation;
- (BOOL)isLoadedFromFile;
- (BOOL)uploadToURL:(id)a0 usingCompression:(BOOL)a1;
- (id)handleUploadCommand:(id)a0;
- (id)_jsonRepresentationForArray:(id)a0;
- (id)jsonRepresentationForDataTypes:(id)a0;

@end
