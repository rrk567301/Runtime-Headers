@class NSArray, NSDictionary, _TtC10SILManager11SILManifest;

@interface SILManager.SILManifest : SILManager.SILMgrCommonBase {
    void /* function */ indicators;
    void /* function */ cursorsByResolutionByName;
    void /* function */ cursorsByResolutionByType;
    void /* function */ cursorNameByAxCursorName;
    void /* function */ sortedCursorsByResolution;
    void /* unknown type, empty encoding */ $__lazy_storage_$_availableCursorResolutions;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maxCursorExtent;
}

@property (class, nonatomic, readonly) _TtC10SILManager11SILManifest *manifest;
@property (class, nonatomic) BOOL usesSoftBoundary;

@property (nonatomic, readonly) NSArray *indicators;
@property (nonatomic, readonly) NSDictionary *cursorsByResolutionByName;
@property (nonatomic, readonly) NSDictionary *cursorsByResolutionByType;
@property (nonatomic, readonly) NSDictionary *cursorNameByAxCursorName;
@property (nonatomic, readonly) NSDictionary *sortedCursorsByResolution;
@property (nonatomic, readonly) long long numCursorTypes;
@property (nonatomic, copy) NSArray *availableCursorResolutions;
@property (nonatomic) long long maxCursorExtent;

+ (BOOL)validateFlipBookStates:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (BOOL)cursorSizeIsValidWithCursorType:(long long)a0 scale:(float)a1 resolution:(long long)a2;
- (unsigned int)cursorTypeFromName:(id)a0;
- (id)indicatorFromName:(id)a0 error:(id *)a1;
- (id)indicatorFromType:(long long)a0 error:(id *)a1;
- (id)initWithIndicators:(id)a0 cursors:(id)a1;
- (BOOL)isSingleDirectionWindowResizeCursorWithType:(long long)a0;
- (long long)maxAssetBpr;
- (long long)maxAssetExtent;

@end
