@class NSHashTable;

@interface ICMZoomController : TTZoomController

@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly, nonatomic) double localZoomFactor;
@property (nonatomic) long long savedZoomFactorIndex;
@property (nonatomic) double attachmentBrickZoomFactor;
@property (nonatomic) long long localZoomFactorIndex;
@property (nonatomic) BOOL onlyAcceptsCustomZooms;

+ (double)checklistZoomFactor;
+ (void)setGlobalZoomFactorIndex:(long long)a0;
+ (long long)globalZoomFactorIndex;
+ (id)globalZoomFactors;
+ (id)localZoomFactors;
+ (id)noteListZoomFactors;
+ (id)attachmentBrickZoomFactors;
+ (double)maxAttachmentBrickZoomFactor;
+ (id)checklistZoomFactors;
+ (id)convertFontSizeArrayToMultipliersFromArray:(id)a0;
+ (double)globalZoomFactor;
+ (double)noteListZoomFactor;
+ (double)attachmentBrickZoomFactor;

- (id)init;
- (void).cxx_destruct;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (BOOL)canZoomIn;
- (BOOL)canZoomOut;
- (BOOL)zoomIn;
- (BOOL)zoomOut;
- (BOOL)zoomResetToGlobalDefault;
- (BOOL)zoomToCustomFactor:(double)a0;
- (void)applyZoomFactorIndex;
- (void)notifyDelegates;

@end
