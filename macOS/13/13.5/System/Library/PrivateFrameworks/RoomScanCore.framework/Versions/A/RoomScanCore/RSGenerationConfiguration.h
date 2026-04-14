@interface RSGenerationConfiguration : NSObject

@property (nonatomic, getter=isWindowDoorDetectionEnabled) BOOL windowDoorDetectionEnabled;
@property (nonatomic, getter=isObjectBeautificationEnabled) BOOL objectBeautificationEnabled;
@property (nonatomic, getter=isChairBeautificationEnabled) BOOL chairBeautificationEnabled;
@property (nonatomic, getter=isStandardizationEnabled) BOOL standardizationEnabled;
@property (nonatomic, getter=isWallOpeningMergeEnabled) BOOL wallOpeningMergeEnabled;
@property (nonatomic, getter=isOpeningReplaceOpendoorEnabled) BOOL openingReplaceOpendoorEnabled;
@property (nonatomic, getter=isNonUniformHeightEnabled) BOOL nonUniformHeightEnabled;
@property (nonatomic, getter=isOpendoorReplaceOpeningEnabled) BOOL opendoorReplaceOpeningEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
