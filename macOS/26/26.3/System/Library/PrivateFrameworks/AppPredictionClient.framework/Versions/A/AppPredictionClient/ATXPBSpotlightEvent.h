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

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
