@interface RSGenerationConfiguration : NSObject <NSCopying>

@property (nonatomic, getter=isWindowDoorDetectionEnabled) char windowDoorDetectionEnabled;
@property (nonatomic, getter=isObjectBeautificationEnabled) char objectBeautificationEnabled;
@property (nonatomic, getter=isChairBeautificationEnabled) char chairBeautificationEnabled;
@property (nonatomic, getter=isStandardizationEnabled) char standardizationEnabled;
@property (nonatomic, getter=isWallOpeningMergeEnabled) char wallOpeningMergeEnabled;
@property (nonatomic, getter=isOpeningReplaceOpendoorEnabled) char openingReplaceOpendoorEnabled;
@property (nonatomic, getter=isNonUniformHeightEnabled) char nonUniformHeightEnabled;
@property (nonatomic, getter=isOpendoorReplaceOpeningEnabled) char opendoorReplaceOpeningEnabled;
@property (nonatomic, getter=isRoomTypeEnabled) char roomTypeEnabled;
@property (nonatomic, getter=isCurveEnabled) char curveEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
