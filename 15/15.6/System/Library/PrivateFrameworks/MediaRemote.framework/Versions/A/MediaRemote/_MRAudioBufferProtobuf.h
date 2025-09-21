@class NSData, _MRAudioFormatSettingsProtobuf, NSMutableArray;

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying> {
    struct { unsigned char maximumPacketSize : 1; unsigned char packetCapacity : 1; unsigned char packetCount : 1; } _has;
}

@property (readonly, nonatomic) char hasFormatSettings;
@property (retain, nonatomic) _MRAudioFormatSettingsProtobuf *formatSettings;
@property (nonatomic) char hasPacketCapacity;
@property (nonatomic) long long packetCapacity;
@property (nonatomic) char hasMaximumPacketSize;
@property (nonatomic) long long maximumPacketSize;
@property (nonatomic) char hasPacketCount;
@property (nonatomic) long long packetCount;
@property (readonly, nonatomic) char hasContents;
@property (retain, nonatomic) NSData *contents;
@property (retain, nonatomic) NSMutableArray *packetDescriptions;

+ (Class)packetDescriptionsType;

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
- (void)addPacketDescriptions:(id)a0;
- (void)clearPacketDescriptions;
- (id)packetDescriptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)packetDescriptionsCount;

@end
