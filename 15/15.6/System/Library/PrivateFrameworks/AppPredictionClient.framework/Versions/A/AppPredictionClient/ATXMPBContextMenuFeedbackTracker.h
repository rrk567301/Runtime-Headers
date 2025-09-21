@class NSString;

@interface ATXMPBContextMenuFeedbackTracker : PBCodable <NSCopying> {
    struct { unsigned char menuActionType : 1; } _has;
}

@property (nonatomic) char hasMenuActionType;
@property (nonatomic) int menuActionType;
@property (readonly, nonatomic) char hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) char hasExecutableType;
@property (retain, nonatomic) NSString *executableType;
@property (readonly, nonatomic) char hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) char hasSuggestion;
@property (retain, nonatomic) NSString *suggestion;

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
- (int)StringAsMenuActionType:(id)a0;
- (id)menuActionTypeAsString:(int)a0;

@end
