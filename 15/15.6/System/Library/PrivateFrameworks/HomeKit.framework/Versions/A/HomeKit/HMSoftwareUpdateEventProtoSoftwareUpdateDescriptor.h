@class NSString, NSData;

@interface HMSoftwareUpdateEventProtoSoftwareUpdateDescriptor : PBCodable <NSCopying> {
    struct { unsigned char downloadSize : 1; unsigned char errorCode : 1; unsigned char majorVersion : 1; unsigned char minorVersion : 1; unsigned char status : 1; unsigned char updateVersion : 1; unsigned char rampEnabled : 1; } _has;
}

@property (nonatomic) char hasStatus;
@property (nonatomic) long long status;
@property (readonly, nonatomic) char hasServerAssetURL;
@property (retain, nonatomic) NSString *serverAssetURL;
@property (readonly, nonatomic) char hasServerAssetAlgorithm;
@property (retain, nonatomic) NSString *serverAssetAlgorithm;
@property (readonly, nonatomic) char hasServerAssetMeasurement;
@property (retain, nonatomic) NSData *serverAssetMeasurement;
@property (nonatomic) char hasMajorVersion;
@property (nonatomic) long long majorVersion;
@property (nonatomic) char hasMinorVersion;
@property (nonatomic) long long minorVersion;
@property (nonatomic) char hasUpdateVersion;
@property (nonatomic) long long updateVersion;
@property (readonly, nonatomic) char hasBuildVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (nonatomic) char hasDownloadSize;
@property (nonatomic) long long downloadSize;
@property (readonly, nonatomic) char hasHumanReadableUpdateName;
@property (retain, nonatomic) NSString *humanReadableUpdateName;
@property (nonatomic) char hasRampEnabled;
@property (nonatomic) char rampEnabled;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) long long errorCode;

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
