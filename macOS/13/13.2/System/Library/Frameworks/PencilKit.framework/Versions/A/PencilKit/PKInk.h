@class NSString, NSData, PKInkBehavior, NSColor;

@interface PKInk : NSObject <NSSecureCoding, NSCopying> {
    struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *__ptr_; struct __shared_weak_count *__cntrl_; } _unknownFields;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *rawValue;
@property (nonatomic) void /* unknown type, empty encoding */ _sixChannelAddColor;
@property (nonatomic) void /* unknown type, empty encoding */ _sixChannelMultiplyColor;
@property (retain, nonatomic) PKInkBehavior *behavior;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) long long inkFormatVersion;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) double _weight;
@property (readonly, nonatomic) BOOL _isStrokeGeneratingInk;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double weight;
@property (readonly, nonatomic) NSString *inkType;
@property (readonly, nonatomic) NSColor *color;

+ (id)identifierForInkType:(id)a0;
+ (id)inkWithType:(id)a0 color:(id)a1 weight:(double)a2;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 weight:(double)a2;
+ (id)inkWithIdentifier:(id)a0 properties:(id)a1;
+ (id)inkWithIdentifier:(id)a0 properties:(id)a1 inkVersion:(long long)a2;
+ (long long)currentInkVersionForInkIdentifier:(id)a0;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 variant:(id)a2;
+ (id)inkFromDictionary:(id)a0 color:(id)a1 identifier:(id)a2;
+ (id)inkFromInk:(id)a0 color:(id)a1;
+ (id)inkFromInk:(id)a0 weight:(double)a1;
+ (id)inkFromInk:(id)a0 withBehavior:(id)a1;
+ (void)_clearCachedInks;
+ (double)defaultWeightForIdentifier:(id)a0;
+ (double)defaultOpacityForIdentifier:(id)a0;
+ (id)colorForLassoStroke;
+ (id)identifierForCommandType:(unsigned int)a0 wantsObjectErase:(BOOL)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)dictionaryRepresentation;
- (void)setWeight:(double)a0;
- (id)properties;
- (id)initWithArchive:(const void *)a0;
- (id)initWithRawValue:(id)a0;
- (void)saveToArchive:(void *)a0;
- (id)initWithInkType:(id)a0 color:(id)a1;
- (id)initWithBehavior:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 weight:(double)a4;
- (long long)_numPaintFramebuffers;
- (BOOL)_supportsCombiningStrokes;
- (void)_addTestDataToUnknownFields;
- (id)_dataInUnknownFields;
- (id)initWithV1Archive:(const void *)a0 serializationVersion:(unsigned long long)a1;
- (void)saveToV1Archive:(void *)a0;
- (id)_copyWithVariant:(id)a0;
- (BOOL)_isHandwritingInk;
- (BOOL)_isPencilInk;
- (BOOL)_isMarkerInk;
- (BOOL)_isLassoInk;
- (BOOL)_isEraserInk;
- (BOOL)_isMonolineInk;
- (BOOL)_isFountainPenInk;
- (BOOL)_isWatercolorInk;
- (id)identifierForArchiving;
- (id)variantForArchiving;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 weight:(double)a4;
- (id)initWithUncheckedIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 weight:(double)a4;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 weight:(double)a4 behavior:(id)a5;
- (unsigned long long)hashValueForFloat:(double)a0;
- (BOOL)isEqualInk:(id)a0;
- (BOOL)isEqualUnweightedInk:(id)a0;
- (void /* unknown type, empty encoding */)_defaultSixChannelAddColor;
- (void /* unknown type, empty encoding */)_defaultSixChannelMultiplyColor;
- (void)_setupDefaultSixChannelAddAndMultiplyColors;
- (void)_setupCustomizedSixChannelColors;
- (BOOL)_shouldSaveSixChannelAddColor;
- (BOOL)_shouldSaveSixChannelMultiplyColor;
- (id)_sixChannelVersion;

@end
