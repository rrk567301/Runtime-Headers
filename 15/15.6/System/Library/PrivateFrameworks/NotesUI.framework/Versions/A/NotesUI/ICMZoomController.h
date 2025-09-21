@class NSHashTable;

@interface ICMZoomController : ICTTZoomController

@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly, nonatomic) double localZoomFactor;
@property (nonatomic) long long savedZoomFactorIndex;
@property (nonatomic) double attachmentBrickZoomFactor;
@property (nonatomic) long long localZoomFactorIndex;
@property (nonatomic) char onlyAcceptsCustomZooms;

+ (double)attachmentBrickZoomFactor;
+ (id)attachmentBrickZoomFactors;
+ (double)checklistZoomFactor;
+ (id)checklistZoomFactors;
+ (id)convertFontSizeArrayToMultipliersFromArray:(id)a0;
+ (double)globalZoomFactor;
+ (long long)globalZoomFactorIndex;
+ (id)globalZoomFactors;
+ (id)localZoomFactors;
+ (double)maxAttachmentBrickZoomFactor;
+ (double)noteListZoomFactor;
+ (id)noteListZoomFactors;
+ (void)setGlobalZoomFactorIndex:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (char)canZoomIn;
- (char)canZoomOut;
- (char)zoomOut;
- (char)zoomIn;
- (void)notifyDelegates;
- (void)applyZoomFactorIndex;
- (char)zoomResetToGlobalDefault;
- (char)zoomToCustomFactor:(double)a0;

@end
