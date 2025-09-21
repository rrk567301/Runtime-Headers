@class NSString;

@interface WFPBSuggestAutomationEvent : PBCodable <NSCopying> {
    struct { unsigned char completed : 1; unsigned char interacted : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) char hasSuggestedAutomationIdentifier;
@property (retain, nonatomic) NSString *suggestedAutomationIdentifier;
@property (nonatomic) char hasInteracted;
@property (nonatomic) char interacted;
@property (nonatomic) char hasCompleted;
@property (nonatomic) char completed;
@property (readonly, nonatomic) char hasSource;
@property (retain, nonatomic) NSString *source;

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
