@class NSArray, NSNumber, CHDrawing;

@interface CHSynthesisRequestOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *styleDrawings;
@property (retain, nonatomic) NSArray *styleContents;
@property (retain, nonatomic) NSArray *stylePredictions;
@property (nonatomic) BOOL isFastPath;
@property (retain, nonatomic) NSNumber *forwardProcessRatio;
@property (retain, nonatomic) NSNumber *backwardProcessRatio;
@property (retain, nonatomic) NSNumber *fitWidth;
@property (retain, nonatomic) NSNumber *fitHeight;
@property (retain, nonatomic) NSNumber *distanceBetweenDigits;
@property (nonatomic) long long synthesizeCharacterInventoryBehavior;
@property (retain, nonatomic) CHDrawing *xZeroDrawing;
@property (nonatomic) BOOL fastPathAsXZero;
@property (nonatomic) BOOL fastPathUseDefaultStyle;
@property (nonatomic) BOOL styleInventoryQuery;
@property (nonatomic) BOOL skipStyleInventoryLookup;
@property (nonatomic) BOOL saveStyleSample;
@property (retain, nonatomic) NSNumber *seed;
@property (nonatomic) long long chunkSynthesisSuggestion;
@property (nonatomic) BOOL forceInventoryDefaultStyle;

+ (id)synthesisOptionsWithDictionary:(id)a0;
+ (id)synthesisOptionsWithDrawings:(id)a0 contents:(id)a1;
+ (id)synthesisOptionsWithDrawings:(id)a0 contents:(id)a1 stylePredictions:(id)a2 isFastPath:(BOOL)a3 fitWidth:(id)a4 fitHeight:(id)a5 synthesizeCharacterInventoryBehavior:(long long)a6 xZeroDrawing:(id)a7 fastPathAsXZero:(BOOL)a8 fastPathUseDefaultStyle:(BOOL)a9 styleInventoryQuery:(BOOL)a10 skipStyleInventoryLookup:(BOOL)a11 saveStyleSample:(BOOL)a12 forwardProcessRatio:(id)a13 backwardProcessRatio:(id)a14 seed:(id)a15 synthesisSuggestion:(long long)a16 forceInventoryDefaultStyle:(BOOL)a17;
+ (id)synthesisOptionsWithFastPath:(BOOL)a0;
+ (id)synthesisOptionsWithStyleStrength:(id)a0;
+ (id)synthesisOptionsWithSynthesizeCharacterInventoryBehavior:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionary;
- (void).cxx_destruct;
- (id)initWithStyleDrawings:(id)a0 styleContents:(id)a1 stylePredictions:(id)a2 isFastPath:(BOOL)a3 fitWidth:(id)a4 fitHeight:(id)a5 synthesizeCharacterInventoryBehavior:(long long)a6 xZeroDrawing:(id)a7 fastPathAsXZero:(BOOL)a8 fastPathUseDefaultStyle:(BOOL)a9 styleInventoryQuery:(BOOL)a10 skipStyleInventoryLookup:(BOOL)a11 saveStyleSample:(BOOL)a12 distanceBetweenDigits:(id)a13 forwardProcessRatio:(id)a14 backwardProcessRatio:(id)a15 seed:(id)a16 synthesisSuggestion:(long long)a17 forceInventoryDefaultStyle:(BOOL)a18;

@end
