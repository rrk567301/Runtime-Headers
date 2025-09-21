@class NSString;

@interface ATXMPBContextMenuFeedbackTracker : PBCodable <NSCopying> {
    struct { unsigned char menuActionType : 1; } _has;
}

@property (nonatomic) BOOL hasMenuActionType;
@property (nonatomic) int menuActionType;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) BOOL hasExecutableType;
@property (retain, nonatomic) NSString *executableType;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) BOOL hasSuggestion;
@property (retain, nonatomic) NSString *suggestion;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsMenuActionType:(id)a0;
- (id)menuActionTypeAsString:(int)a0;

@end
