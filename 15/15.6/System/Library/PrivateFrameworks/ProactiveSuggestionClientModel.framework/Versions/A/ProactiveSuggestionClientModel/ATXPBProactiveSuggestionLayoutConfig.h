@interface ATXPBProactiveSuggestionLayoutConfig : PBCodable <NSCopying> {
    int _applicableLayoutType;
    struct { unsigned char applicableLayoutType : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
