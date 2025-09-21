@class NSString;

@interface WFPBSetupSuggestedAutomationEvent : PBCodable <NSCopying> {
    struct { unsigned char currentStep : 1; unsigned char completed : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasSuggestedAutomationIdentifier;
@property (retain, nonatomic) NSString *suggestedAutomationIdentifier;
@property (nonatomic) char hasCurrentStep;
@property (nonatomic) unsigned int currentStep;
@property (nonatomic) char hasCompleted;
@property (nonatomic) char completed;

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

@end
