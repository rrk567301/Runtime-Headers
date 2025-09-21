@class NSString, NSMutableArray, ICIAMTriggerCondition;

@interface ICIAMMessageRule : PBCodable <NSCopying> {
    struct { unsigned char ruleOperator : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasRuleOperator;
@property (nonatomic) int ruleOperator;
@property (retain, nonatomic) NSMutableArray *subrules;
@property (readonly, nonatomic) char hasTriggerCondition;
@property (retain, nonatomic) ICIAMTriggerCondition *triggerCondition;
@property (readonly, nonatomic) char hasTriggerEventName;
@property (retain, nonatomic) NSString *triggerEventName;
@property (readonly, nonatomic) char hasRequiredApplicationContextBundleIdentifier;
@property (retain, nonatomic) NSString *requiredApplicationContextBundleIdentifier;

+ (Class)subrulesType;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsRuleOperator:(id)a0;
- (void)addSubrules:(id)a0;
- (void)clearSubrules;
- (id)ruleOperatorAsString:(int)a0;
- (id)subrulesAtIndex:(unsigned long long)a0;
- (unsigned long long)subrulesCount;

@end
