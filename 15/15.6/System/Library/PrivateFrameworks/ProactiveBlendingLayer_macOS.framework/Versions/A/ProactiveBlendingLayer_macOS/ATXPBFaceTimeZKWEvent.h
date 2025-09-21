@class NSString, NSMutableArray;

@interface ATXPBFaceTimeZKWEvent : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) char hasEventType;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) char hasDate;
@property (nonatomic) double date;
@property (readonly, nonatomic) char hasBlendingCacheId;
@property (retain, nonatomic) NSString *blendingCacheId;
@property (retain, nonatomic) NSMutableArray *suggestionIds;

+ (Class)suggestionIdsType;

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
- (void)addSuggestionIds:(id)a0;
- (void)clearSuggestionIds;
- (id)suggestionIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionIdsCount;

@end
