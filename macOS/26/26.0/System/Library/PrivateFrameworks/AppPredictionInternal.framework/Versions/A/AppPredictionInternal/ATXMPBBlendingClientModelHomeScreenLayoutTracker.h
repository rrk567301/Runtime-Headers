@class NSString;

@interface ATXMPBBlendingClientModelHomeScreenLayoutTracker : PBCodable <NSCopying> {
    struct { unsigned char numSuggestionsForClientModelInLayout : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLayoutType;
@property (retain, nonatomic) NSString *layoutType;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) BOOL hasNumSuggestionsForClientModelInLayout;
@property (nonatomic) unsigned int numSuggestionsForClientModelInLayout;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (readonly, nonatomic) BOOL hasClientModelABGroup;
@property (retain, nonatomic) NSString *clientModelABGroup;

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

@end
