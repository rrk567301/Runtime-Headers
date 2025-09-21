@class NSString;

@interface ATXMPBBlendingClientModelHomeScreenLayoutTracker : PBCodable <NSCopying> {
    struct { unsigned char numSuggestionsForClientModelInLayout : 1; } _has;
}

@property (readonly, nonatomic) char hasLayoutType;
@property (retain, nonatomic) NSString *layoutType;
@property (readonly, nonatomic) char hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) char hasNumSuggestionsForClientModelInLayout;
@property (nonatomic) unsigned int numSuggestionsForClientModelInLayout;
@property (readonly, nonatomic) char hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) char hasClientModelABGroup;
@property (retain, nonatomic) NSString *clientModelABGroup;

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
