@class NSString, NSMutableArray;

@interface BMPBPhotosPhotoViewEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) char hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) char hasContentProtection;
@property (retain, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) char hasPersonaId;
@property (retain, nonatomic) NSString *personaId;

+ (Class)locationsType;

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
- (void)addLocations:(id)a0;
- (void)clearLocations;
- (unsigned long long)locationsCount;
- (id)locationsAtIndex:(unsigned long long)a0;

@end
