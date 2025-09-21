@class NSString;

@interface COMAPPLEPETCOMMONPETMetadata : PBCodable <NSCopying> {
    struct { unsigned char uploadTime : 1; unsigned char configVersion : 1; unsigned char typeId : 1; unsigned char uploadService : 1; unsigned char isConfigEnabled : 1; unsigned char isGm : 1; unsigned char isInternal : 1; unsigned char isInternalCarry : 1; unsigned char isSeed : 1; unsigned char isTestingData : 1; unsigned char isTrialUpload : 1; } _has;
}

@property (nonatomic) char hasUploadTime;
@property (nonatomic) unsigned long long uploadTime;
@property (readonly, nonatomic) char hasPlatform;
@property (retain, nonatomic) NSString *platform;
@property (readonly, nonatomic) char hasDevice;
@property (retain, nonatomic) NSString *device;
@property (readonly, nonatomic) char hasBuild;
@property (retain, nonatomic) NSString *build;
@property (nonatomic) char hasIsInternal;
@property (nonatomic) char isInternal;
@property (nonatomic) char hasIsSeed;
@property (nonatomic) char isSeed;
@property (nonatomic) char hasIsGm;
@property (nonatomic) char isGm;
@property (readonly, nonatomic) char hasCountry;
@property (retain, nonatomic) NSString *country;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) char hasConfigVersion;
@property (nonatomic) unsigned int configVersion;
@property (readonly, nonatomic) char hasPseudoDeviceId;
@property (retain, nonatomic) NSString *pseudoDeviceId;
@property (nonatomic) char hasIsInternalCarry;
@property (nonatomic) char isInternalCarry;
@property (nonatomic) char hasIsConfigEnabled;
@property (nonatomic) char isConfigEnabled;
@property (readonly, nonatomic) char hasMessageGroup;
@property (retain, nonatomic) NSString *messageGroup;
@property (nonatomic) char hasUploadService;
@property (nonatomic) int uploadService;
@property (readonly, nonatomic) char hasUploadIdentifier;
@property (retain, nonatomic) NSString *uploadIdentifier;
@property (nonatomic) char hasTypeId;
@property (nonatomic) unsigned int typeId;
@property (readonly, nonatomic) char hasMessageName;
@property (retain, nonatomic) NSString *messageName;
@property (nonatomic) char hasIsTestingData;
@property (nonatomic) char isTestingData;
@property (nonatomic) char hasIsTrialUpload;
@property (nonatomic) char isTrialUpload;

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
- (int)StringAsUploadService:(id)a0;
- (id)uploadServiceAsString:(int)a0;

@end
