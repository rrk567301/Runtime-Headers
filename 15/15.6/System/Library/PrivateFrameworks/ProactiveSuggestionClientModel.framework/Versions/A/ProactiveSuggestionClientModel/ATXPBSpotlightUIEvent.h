@class NSString;

@interface ATXPBSpotlightUIEvent : PBCodable <NSCopying> {
    struct { unsigned char eventType : 1; } _has;
}

@property (readonly, nonatomic) char hasSuggestionUniqueId;
@property (retain, nonatomic) NSString *suggestionUniqueId;
@property (readonly, nonatomic) char hasSuggestionType;
@property (retain, nonatomic) NSString *suggestionType;
@property (readonly, nonatomic) char hasSuggestionSubtype;
@property (retain, nonatomic) NSString *suggestionSubtype;
@property (readonly, nonatomic) char hasSuggestionContext;
@property (retain, nonatomic) NSString *suggestionContext;
@property (nonatomic) char hasEventType;
@property (nonatomic) long long eventType;

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
