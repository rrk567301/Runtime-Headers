@class NSString, NSData, PKInkBehavior, NSColor;

@interface PKInk : NSObject <NSCopying> {
    struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *__ptr_; struct __shared_weak_count *__cntrl_; } _unknownFields;
}

@property (readonly, nonatomic) NSData *rawValue;
@property (nonatomic) void /* unknown type, empty encoding */ _sixChannelAddColor;
@property (nonatomic) void /* unknown type, empty encoding */ _sixChannelMultiplyColor;
@property (retain, nonatomic) PKInkBehavior *behavior;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) double _weight;
@property (readonly, nonatomic) BOOL _isStrokeGeneratingInk;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double weight;
@property (readonly, nonatomic) NSString *inkType;
@property (readonly, nonatomic) NSColor *color;

+ (id)inkWithIdentifier:(id)a0 color:(id)a1 weight:(double)a2;
+ (double)defaultWeightForIdentifier:(id)a0;
+ (id)inkWithType:(id)a0 color:(id)a1 weight:(double)a2;
+ (long long)currentInkVersionForInkIdentifier:(id)a0;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1;
+ (id)identifierForCommandType:(unsigned int)a0 wantsObjectErase:(BOOL)a1;
+ (id)identifierForInkType:(id)a0;
+ (double)defaultOpacityForIdentifier:(id)a0;
+ (id)inkWithIdentifier:(id)a0 properties:(id)a1;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 variant:(id)a2;
+ (id)inkFromDictionary:(id)a0 color:(id)a1 identifier:(id)a2;
+ (id)inkFromInk:(id)a0 color:(id)a1;
+ (id)inkFromInk:(id)a0 withBehavior:(id)a1;
+ (id)colorForLassoStroke;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)dictionaryRepresentation;
- (void)setWeight:(double)a0;
- (id)properties;
- (id)initWithArchive:(const void *)a0;
- (id)initWithRawValue:(id)a0;
- (void)saveToArchive:(void *)a0;
- (id)initWithInkType:(id)a0 color:(id)a1;
- (BOOL)_isEraserInk;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3;
- (BOOL)isEqualUnweightedInk:(id)a0;
- (void)_addTestDataToUnknownFields;
- (id)_dataInUnknownFields;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 weight:(double)a4;
- (BOOL)_isLassoInk;
- (id)initWithV1Archive:(const void *)a0 serializationVersion:(unsigned long long)a1;
- (void)saveToV1Archive:(void *)a0;
- (BOOL)_shouldSaveSixChannelAddColor;
- (BOOL)_shouldSaveSixChannelMultiplyColor;
- (void)_setupDefaultSixChannelAddAndMultiplyColors;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 behavior:(id)a4;
- (BOOL)isEqualInk:(id)a0;
- (unsigned long long)hashValueForFloat:(double)a0;
- (void /* unknown type, empty encoding */)_defaultSixChannelAddColor;
- (void /* unknown type, empty encoding */)_defaultSixChannelMultiplyColor;
- (void)_setupCustomizedSixChannelColors;
- (BOOL)_isHandwritingInk;
- (id)_sixChannelVersion;

@end
