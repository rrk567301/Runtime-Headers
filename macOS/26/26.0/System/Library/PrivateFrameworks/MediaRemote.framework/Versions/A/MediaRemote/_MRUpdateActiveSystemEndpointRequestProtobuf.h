@class NSString;

@interface _MRUpdateActiveSystemEndpointRequestProtobuf : PBCodable <NSCopying> {
    struct { unsigned char disableDuration : 1; unsigned char type : 1; unsigned char changeType : 1; unsigned char demoteWhenSyncingToCompanion : 1; unsigned char pairedDeviceSync : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOutputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) int changeType;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) BOOL hasPairedDeviceSync;
@property (nonatomic) BOOL pairedDeviceSync;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL hasDisableDuration;
@property (nonatomic) double disableDuration;
@property (nonatomic) BOOL hasDemoteWhenSyncingToCompanion;
@property (nonatomic) BOOL demoteWhenSyncingToCompanion;
@property (readonly, nonatomic) BOOL hasPreviousOutputDeviceUID;
@property (retain, nonatomic) NSString *previousOutputDeviceUID;

- (int)StringAsChangeType:(id)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (id)changeTypeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
