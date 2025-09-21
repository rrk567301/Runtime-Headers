@class NSString, NSMutableArray, ATXPBShortcutsEditorEventMetadata;

@interface ATXPBShortcutsEditorEvent : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char eventType : 1; } _has;
}

@property (nonatomic) char hasDate;
@property (nonatomic) double date;
@property (nonatomic) char hasEventType;
@property (nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) char hasBlendingCacheId;
@property (retain, nonatomic) NSString *blendingCacheId;
@property (retain, nonatomic) NSMutableArray *suggestionUUIDs;
@property (readonly, nonatomic) char hasMetadata;
@property (retain, nonatomic) ATXPBShortcutsEditorEventMetadata *metadata;

+ (Class)suggestionUUIDsType;

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
- (void)clearSuggestionUUIDs;
- (unsigned long long)suggestionUUIDsCount;
- (void)addSuggestionUUIDs:(id)a0;
- (id)suggestionUUIDsAtIndex:(unsigned long long)a0;

@end
