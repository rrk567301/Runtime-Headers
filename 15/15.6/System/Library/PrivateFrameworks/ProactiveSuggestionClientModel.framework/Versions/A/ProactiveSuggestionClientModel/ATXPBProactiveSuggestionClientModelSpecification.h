@class NSString;

@interface ATXPBProactiveSuggestionClientModelSpecification : PBCodable <NSCopying> {
    NSString *_clientModelId;
    NSString *_clientModelVersion;
    int _engagementResetPolicy;
    struct { unsigned char engagementResetPolicy : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
