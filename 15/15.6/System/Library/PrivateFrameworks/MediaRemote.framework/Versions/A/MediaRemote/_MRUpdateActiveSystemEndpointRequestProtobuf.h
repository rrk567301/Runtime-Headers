@class NSString;

@interface _MRUpdateActiveSystemEndpointRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char disableDuration : 1; unsigned char type : 1; unsigned char changeType : 1; unsigned char demoteWhenSyncingToCompanion : 1; unsigned char pairedDeviceSync : 1; } _has;
}

@property (readonly, nonatomic) char hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;
@property (nonatomic) char hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) char hasReason;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) char hasPairedDeviceSync;
@property (nonatomic) char pairedDeviceSync;
@property (nonatomic) char hasType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) char hasDisableDuration;
@property (nonatomic) double disableDuration;
@property (nonatomic) char hasDemoteWhenSyncingToCompanion;
@property (nonatomic) char demoteWhenSyncingToCompanion;

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
- (int)StringAsChangeType:(id)a0;
- (id)changeTypeAsString:(int)a0;

@end
