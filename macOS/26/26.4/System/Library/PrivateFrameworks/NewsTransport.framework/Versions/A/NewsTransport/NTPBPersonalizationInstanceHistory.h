@class NSString;

@interface NTPBPersonalizationInstanceHistory : PBCodable <NSCopying> {
    struct { unsigned char lastChangeNumber : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier;
@property (nonatomic) BOOL hasLastChangeNumber;
@property (nonatomic) unsigned long long lastChangeNumber;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;

@end
