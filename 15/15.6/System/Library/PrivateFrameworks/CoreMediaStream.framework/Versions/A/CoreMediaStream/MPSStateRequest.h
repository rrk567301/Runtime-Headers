@class NSString;

@interface MPSStateRequest : PBRequest <NSCopying> {
    struct { unsigned char originalLibrarySize : 1; } _has;
}

@property (readonly, nonatomic) char hasMPSDeviceID;
@property (retain, nonatomic) NSString *mPSDeviceID;
@property (readonly, nonatomic) char hasICPLDeviceID;
@property (retain, nonatomic) NSString *iCPLDeviceID;
@property (readonly, nonatomic) char hasBackupDeviceID;
@property (retain, nonatomic) NSString *backupDeviceID;
@property (readonly, nonatomic) char hasBackupDeviceUUID;
@property (retain, nonatomic) NSString *backupDeviceUUID;
@property (readonly, nonatomic) char hasBackupDeviceUDID;
@property (retain, nonatomic) NSString *backupDeviceUDID;
@property (nonatomic) char hasOriginalLibrarySize;
@property (nonatomic) long long originalLibrarySize;

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

@end
