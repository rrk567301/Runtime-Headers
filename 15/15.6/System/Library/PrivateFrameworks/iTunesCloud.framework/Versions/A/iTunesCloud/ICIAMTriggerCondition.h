@class NSString;

@interface ICIAMTriggerCondition : PBCodable <NSCopying> {
    struct { unsigned char comparisonType : 1; unsigned char dataType : 1; unsigned char kind : 1; unsigned char triggerConditionType : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasDataType;
@property (nonatomic) int dataType;
@property (nonatomic) char hasComparisonType;
@property (nonatomic) int comparisonType;
@property (readonly, nonatomic) char hasTriggerValue;
@property (retain, nonatomic) NSString *triggerValue;
@property (nonatomic) char hasTriggerConditionType;
@property (nonatomic) int triggerConditionType;
@property (nonatomic) char hasKind;
@property (nonatomic) int kind;
@property (readonly, nonatomic) char hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsComparisonType:(id)a0;
- (int)StringAsTriggerConditionType:(id)a0;
- (int)StringAsDataType:(id)a0;
- (int)StringAsKind:(id)a0;
- (id)comparisonTypeAsString:(int)a0;
- (id)dataTypeAsString:(int)a0;
- (id)kindAsString:(int)a0;
- (id)triggerConditionTypeAsString:(int)a0;

@end
