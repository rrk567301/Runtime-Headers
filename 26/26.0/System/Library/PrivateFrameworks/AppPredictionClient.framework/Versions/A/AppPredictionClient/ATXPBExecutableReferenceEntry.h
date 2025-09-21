@class NSString;

@interface ATXPBExecutableReferenceEntry : PBCodable <NSCopying> {
    double _date;
    NSString *_clientModelId;
    BOOL _shouldClearOnEngagement;
    BOOL _shouldPurge;
    BOOL _suggestionIsHidden;
    struct { unsigned char date : 1; unsigned char shouldClearOnEngagement : 1; unsigned char shouldPurge : 1; unsigned char suggestionIsHidden : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
