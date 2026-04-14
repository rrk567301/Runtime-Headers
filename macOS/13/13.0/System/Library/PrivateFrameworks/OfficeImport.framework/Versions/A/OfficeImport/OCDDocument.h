@class OCDReader, NSData, OADTheme, OADBlipCollection, OCDWriter, OADGraphicStyleCache, OCDSummary, NSMutableArray, OADTableStyleCollection, OADTextListStyle, OITSUPointerKeyDictionary;

@interface OCDDocument : NSObject {
    OADTheme *mDocumentTheme;
    NSData *mEncryptionInfo;
}

@property (retain, nonatomic) OCDReader *reader;
@property (retain, nonatomic) OCDWriter *writer;
@property (readonly, nonatomic) OCDSummary *summary;
@property (readonly, nonatomic) OADBlipCollection *blips;
@property (readonly, nonatomic) NSMutableArray *charts;
@property (readonly, nonatomic) OADTableStyleCollection *tableStyles;
@property (readonly, nonatomic) OITSUPointerKeyDictionary *dualDrawableMap;
@property (readonly, nonatomic) OADTextListStyle *defaultTextStyle;
@property (retain, nonatomic) OADGraphicStyleCache *graphicStyleCache;

- (id)init;
- (void).cxx_destruct;
- (void)setTheme:(id)a0;
- (id)theme;
- (void)removeUnnecessaryOverrides;
- (BOOL)isFromBinaryFile;
- (id)encryptionInfo;
- (void)setEncryptionInfo:(id)a0;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)bulletBlips;

@end
