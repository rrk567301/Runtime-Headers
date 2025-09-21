@class NSString, NSData;

@interface SGMIMetricsRegexSignatureStat : PBCodable <NSCopying> {
    struct { unsigned char blockedWarningCount : 1; unsigned char negativeEngagement : 1; unsigned char noEngagement : 1; unsigned char positiveEngagement : 1; unsigned char type : 1; unsigned char incomingMessage : 1; } _has;
}

@property (readonly, nonatomic) char hasEmailLanguage;
@property (retain, nonatomic) NSString *emailLanguage;
@property (readonly, nonatomic) char hasRegexLanguage;
@property (retain, nonatomic) NSString *regexLanguage;
@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (nonatomic) char hasIncomingMessage;
@property (nonatomic) char incomingMessage;
@property (readonly, nonatomic) char hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) char hasNegativeEngagement;
@property (nonatomic) unsigned int negativeEngagement;
@property (nonatomic) char hasNoEngagement;
@property (nonatomic) unsigned int noEngagement;
@property (nonatomic) char hasPositiveEngagement;
@property (nonatomic) unsigned int positiveEngagement;
@property (nonatomic) char hasBlockedWarningCount;
@property (nonatomic) unsigned int blockedWarningCount;

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

@end
