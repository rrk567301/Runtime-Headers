@class NSHashTable;

@interface ICMZoomController : TTZoomController

@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly, nonatomic) double localZoomFactor;
@property (nonatomic) long long savedZoomFactorIndex;
@property (nonatomic) double attachmentBrickZoomFactor;
@property (nonatomic) long long localZoomFactorIndex;
@property (nonatomic) BOOL onlyAcceptsCustomZooms;

+ (double)attachmentBrickZoomFactor;
+ (double)checklistZoomFactor;
+ (long long)globalZoomFactorIndex;
+ (id)globalZoomFactors;
+ (void)setGlobalZoomFactorIndex:(long long)a0;
+ (id)convertFontSizeArrayToMultipliersFromArray:(id)a0;
+ (id)noteListZoomFactors;
+ (id)attachmentBrickZoomFactors;
+ (id)checklistZoomFactors;
+ (double)maxAttachmentBrickZoomFactor;
+ (id)localZoomFactors;
+ (double)globalZoomFactor;
+ (double)noteListZoomFactor;

- (id)init;
- (void).cxx_destruct;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (BOOL)canZoomOut;
- (BOOL)canZoomIn;
- (BOOL)zoomIn;
- (BOOL)zoomOut;
- (void)applyZoomFactorIndex;
- (void)notifyDelegates;
- (BOOL)zoomResetToGlobalDefault;
- (BOOL)zoomToCustomFactor:(double)a0;

@end
