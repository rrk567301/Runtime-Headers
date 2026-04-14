@class NSString, NSMutableArray, ICIAMMetricEvent;

@interface ICIAMMessageAction : PBCodable <NSCopying> {
    struct { unsigned char messageRemovalPolicy : 1; unsigned char requiresDelegate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasDisplayText;
@property (retain, nonatomic) NSString *displayText;
@property (readonly, nonatomic) BOOL hasURL;
@property (retain, nonatomic) NSString *uRL;
@property (nonatomic) BOOL hasRequiresDelegate;
@property (nonatomic) BOOL requiresDelegate;
@property (retain, nonatomic) NSMutableArray *actionParameters;
@property (readonly, nonatomic) BOOL hasClickEvent;
@property (retain, nonatomic) ICIAMMetricEvent *clickEvent;
@property (nonatomic) BOOL hasMessageRemovalPolicy;
@property (nonatomic) int messageRemovalPolicy;

+ (Class)actionParametersType;

- (unsigned long long)actionParametersCount;
- (id)actionParametersAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)messageRemovalPolicyAsString:(int)a0;
- (unsigned long long)hash;
- (int)StringAsMessageRemovalPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addActionParameters:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)clearActionParameters;
- (void)writeTo:(id)a0;

@end
