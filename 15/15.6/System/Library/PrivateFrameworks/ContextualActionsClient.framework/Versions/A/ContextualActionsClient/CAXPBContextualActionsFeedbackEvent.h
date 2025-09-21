@class CAXPBContextualAction, NSString, CAXPBPredictionContext, CAXPBSuggestion;

@interface CAXPBContextualActionsFeedbackEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSelectedAction;
@property (retain, nonatomic) CAXPBContextualAction *selectedAction;
@property (readonly, nonatomic) char hasSuggestion;
@property (retain, nonatomic) CAXPBSuggestion *suggestion;
@property (readonly, nonatomic) char hasDeviceContext;
@property (retain, nonatomic) CAXPBPredictionContext *deviceContext;
@property (readonly, nonatomic) char hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;

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
