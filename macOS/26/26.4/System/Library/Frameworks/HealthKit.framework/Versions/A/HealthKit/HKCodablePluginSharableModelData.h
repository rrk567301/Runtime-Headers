@class NSData, NSString;

@interface HKCodablePluginSharableModelData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserData;
@property (retain, nonatomic) NSData *userData;
@property (readonly, nonatomic) BOOL hasSourceTimeZoneIdentifier;
@property (retain, nonatomic) NSString *sourceTimeZoneIdentifier;
@property (readonly, nonatomic) BOOL hasSourceLocaleIdentifier;
@property (retain, nonatomic) NSString *sourceLocaleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
