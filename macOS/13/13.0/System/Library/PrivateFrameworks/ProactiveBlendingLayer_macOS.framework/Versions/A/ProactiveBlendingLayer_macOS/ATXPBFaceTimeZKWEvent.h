@class NSString, NSMutableArray;

@interface ATXPBFaceTimeZKWEvent : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) BOOL hasEventType;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (readonly, nonatomic) BOOL hasBlendingCacheId;
@property (retain, nonatomic) NSString *blendingCacheId;
@property (retain, nonatomic) NSMutableArray *suggestionIds;

+ (Class)suggestionIdsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSuggestionIds;
- (void)addSuggestionIds:(id)a0;
- (unsigned long long)suggestionIdsCount;
- (id)suggestionIdsAtIndex:(unsigned long long)a0;

@end
