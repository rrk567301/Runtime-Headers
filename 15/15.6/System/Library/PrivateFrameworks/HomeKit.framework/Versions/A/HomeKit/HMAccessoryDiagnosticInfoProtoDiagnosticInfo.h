@class HMAccessoryDiagnosticInfoProtoSetupInfo, HMAccessoryDiagnosticInfoProtoAppleMediaAccessoryDiagnosticInfo, HMAccessoryDiagnosticInfoProtoPrimaryResidentDiagnosticInfo;

@interface HMAccessoryDiagnosticInfoProtoDiagnosticInfo : PBCodable <NSCopying> {
    struct { unsigned char generationTime : 1; unsigned char version : 1; unsigned char homeHubVersion : 1; unsigned char numHomes : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned long long version;
@property (readonly, nonatomic) char hasAppleMediaAccessoryDiagnosticInfo;
@property (retain, nonatomic) HMAccessoryDiagnosticInfoProtoAppleMediaAccessoryDiagnosticInfo *appleMediaAccessoryDiagnosticInfo;
@property (readonly, nonatomic) char hasPrimaryResidentDiagnosticInfo;
@property (retain, nonatomic) HMAccessoryDiagnosticInfoProtoPrimaryResidentDiagnosticInfo *primaryResidentDiagnosticInfo;
@property (nonatomic) char hasHomeHubVersion;
@property (nonatomic) int homeHubVersion;
@property (nonatomic) char hasNumHomes;
@property (nonatomic) int numHomes;
@property (readonly, nonatomic) char hasLastSetupInfo;
@property (retain, nonatomic) HMAccessoryDiagnosticInfoProtoSetupInfo *lastSetupInfo;
@property (nonatomic) char hasGenerationTime;
@property (nonatomic) double generationTime;

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
