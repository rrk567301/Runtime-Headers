@class NSString, NSMutableArray, ATXPBSpotlightEventMetadata;

@interface ATXPBSpotlightEvent : PBCodable <NSCopying> {
    double _date;
    NSString *_actionBlendingCacheId;
    NSString *_actionConsumerSubType;
    NSMutableArray *_actionSuggestionIds;
    NSString *_appBlendingCacheId;
    NSString *_appConsumerSubType;
    NSMutableArray *_appSuggestionIds;
    NSMutableArray *_documentSuggestionIds;
    int _eventType;
    ATXPBSpotlightEventMetadata *_metadata;
    struct { unsigned char date : 1; unsigned char eventType : 1; } _has;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
