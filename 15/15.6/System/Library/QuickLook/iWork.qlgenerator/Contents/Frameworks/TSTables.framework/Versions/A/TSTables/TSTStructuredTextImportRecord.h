@class TSTCellRegion, NSArray, NSURL, NSDate, TSKStructuredTextImportSettings, NSData;

@interface TSTStructuredTextImportRecord : NSObject <NSCopying>

@property (retain, nonatomic) TSKStructuredTextImportSettings *importSettings;
@property (retain, nonatomic) NSURL *importSource;
@property (retain, nonatomic) NSDate *importDate;
@property (copy, nonatomic) NSData *sourceData;
@property (nonatomic) double confidence;
@property (retain, nonatomic) TSTCellRegion *importedRegion;
@property (nonatomic) unsigned long long sourceColumnCount;
@property (nonatomic) unsigned long long sourceRowCount;
@property (retain, nonatomic) NSArray *pasteInverseCommands;
@property (nonatomic) unsigned long long pasteType;
@property (nonatomic) char pasteWasUpdate;
@property (readonly, nonatomic, getter=isWholeTableImport) char wholeTableImport;
@property (readonly, nonatomic, getter=isReimportable) char reimportable;

+ (id)record;
+ (id)recordFromArchive:(const void *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initFromArchive:(const void *)a0;
- (void)encodeToArchive:(void *)a0;

@end
