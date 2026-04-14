@class NSString, NSMutableArray;

@interface ATXPBActivity : PBCodable <NSCopying> {
    unsigned long long _origin;
    unsigned long long _uiLocation;
    NSString *_modeUUID;
    NSString *_originAnchorType;
    NSString *_originBundleId;
    NSMutableArray *_serializedTriggers;
    NSString *_suggestionUUID;
    int _type;
    BOOL _shouldSuggestTriggers;
    struct { unsigned char origin : 1; unsigned char uiLocation : 1; unsigned char type : 1; unsigned char shouldSuggestTriggers : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
