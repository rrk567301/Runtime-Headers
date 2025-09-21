@class NSString, NSMutableArray, ICIAMMetricEvent;

@interface ICIAMMessageAction : PBCodable <NSCopying> {
    struct { unsigned char messageRemovalPolicy : 1; unsigned char requiresDelegate : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasDisplayText;
@property (retain, nonatomic) NSString *displayText;
@property (readonly, nonatomic) char hasURL;
@property (retain, nonatomic) NSString *uRL;
@property (nonatomic) char hasRequiresDelegate;
@property (nonatomic) char requiresDelegate;
@property (retain, nonatomic) NSMutableArray *actionParameters;
@property (readonly, nonatomic) char hasClickEvent;
@property (retain, nonatomic) ICIAMMetricEvent *clickEvent;
@property (nonatomic) char hasMessageRemovalPolicy;
@property (nonatomic) int messageRemovalPolicy;

+ (Class)actionParametersType;

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
- (int)StringAsMessageRemovalPolicy:(id)a0;
- (id)actionParametersAtIndex:(unsigned long long)a0;
- (unsigned long long)actionParametersCount;
- (void)addActionParameters:(id)a0;
- (void)clearActionParameters;
- (id)messageRemovalPolicyAsString:(int)a0;

@end
