@class NSData, NSString;

@interface HKCodablePluginSharableModelData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserData;
@property (retain, nonatomic) NSData *userData;
@property (readonly, nonatomic) BOOL hasSourceTimeZoneIdentifier;
@property (retain, nonatomic) NSString *sourceTimeZoneIdentifier;
@property (readonly, nonatomic) BOOL hasSourceLocaleIdentifier;
@property (retain, nonatomic) NSString *sourceLocaleIdentifier;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
