@class TSCHSelectionPathType, NSArray;

@interface TSCHSelectionPath : NSObject <NSCopying> {
    NSArray *_arguments;
}

@property (readonly, nonatomic) TSCHSelectionPathType *pathType;
@property (readonly, nonatomic) TSCHSelectionPath *subSelection;

+ (id)selectionPathWithPathType:(id)a0 arguments:(id)a1;
+ (id)selectionPathWithPathType:(id)a0 arguments:(id)a1 subSelection:(id)a2;
+ (id)chartTitleSelectionPath;
+ (id)seriesSymbolsSelectionPathWithSeriesIndex:(unsigned long long)a0;
+ (id)seriesEditModeSelectionPath;
+ (id)seriesSelectionPathWithSeriesIndex:(unsigned long long)a0;
+ (id)seriesValueLabelSelectionPathWithSeriesIndex:(unsigned long long)a0;
+ (id)selectionPathWithType:(id)a0 name:(id)a1 arguments:(id)a2;

- (id)name;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)type;
- (id)initWithArchive:(const void *)a0;
- (void)saveToArchive:(void *)a0;
- (id)argumentAtIndex:(unsigned long long)a0;
- (id)initWithType:(id)a0 name:(id)a1 arguments:(id)a2;
- (id)debuggingName;
- (id)initWithPathType:(id)a0 arguments:(id)a1 subSelection:(id)a2;
- (unsigned long long)argumentsCount;
- (id)rangeOfReferenceLinePathsToPath:(id)a0 forModel:(id)a1;
- (id)rangeOfPathsToPath:(id)a0;

@end
