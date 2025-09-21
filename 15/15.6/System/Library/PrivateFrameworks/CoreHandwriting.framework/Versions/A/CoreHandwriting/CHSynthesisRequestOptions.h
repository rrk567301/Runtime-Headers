@class NSArray, NSNumber, CHDrawing;

@interface CHSynthesisRequestOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *styleDrawings;
@property (retain, nonatomic) NSArray *styleContents;
@property (retain, nonatomic) NSArray *stylePredictions;
@property (nonatomic) char isFastPath;
@property (retain, nonatomic) NSNumber *forwardProcessRatio;
@property (retain, nonatomic) NSNumber *backwardProcessRatio;
@property (retain, nonatomic) NSNumber *fitWidth;
@property (retain, nonatomic) NSNumber *fitHeight;
@property (retain, nonatomic) NSNumber *distanceBetweenDigits;
@property (nonatomic) long long synthesizeCharacterInventoryBehavior;
@property (retain, nonatomic) CHDrawing *xZeroDrawing;
@property (nonatomic) char fastPathAsXZero;
@property (nonatomic) char fastPathUseDefaultStyle;
@property (nonatomic) char styleInventoryQuery;
@property (nonatomic) char skipStyleInventoryLookup;
@property (nonatomic) char saveStyleSample;
@property (nonatomic) char validateSegments;
@property (retain, nonatomic) NSNumber *seed;

+ (id)synthesisOptionsWithDictionary:(id)a0;
+ (id)synthesisOptionsWithDrawings:(id)a0 contents:(id)a1;
+ (id)synthesisOptionsWithDrawings:(id)a0 contents:(id)a1 stylePredictions:(id)a2 isFastPath:(char)a3 fitWidth:(id)a4 fitHeight:(id)a5 synthesizeCharacterInventoryBehavior:(long long)a6 xZeroDrawing:(id)a7 fastPathAsXZero:(char)a8 fastPathUseDefaultStyle:(char)a9 styleInventoryQuery:(char)a10 skipStyleInventoryLookup:(char)a11 saveStyleSample:(char)a12 forwardProcessRatio:(id)a13 backwardProcessRatio:(id)a14 seed:(id)a15;
+ (id)synthesisOptionsWithFastPath:(char)a0;
+ (id)synthesisOptionsWithStyleStrength:(id)a0;
+ (id)synthesisOptionsWithSynthesizeCharacterInventoryBehavior:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStyleDrawings:(id)a0 styleContents:(id)a1 stylePredictions:(id)a2 isFastPath:(char)a3 fitWidth:(id)a4 fitHeight:(id)a5 synthesizeCharacterInventoryBehavior:(long long)a6 xZeroDrawing:(id)a7 fastPathAsXZero:(char)a8 fastPathUseDefaultStyle:(char)a9 styleInventoryQuery:(char)a10 skipStyleInventoryLookup:(char)a11 saveStyleSample:(char)a12 distanceBetweenDigits:(id)a13 validateSegments:(char)a14 forwardProcessRatio:(id)a15 backwardProcessRatio:(id)a16 seed:(id)a17;

@end
