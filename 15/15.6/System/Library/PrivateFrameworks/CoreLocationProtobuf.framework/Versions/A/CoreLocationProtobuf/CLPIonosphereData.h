@interface CLPIonosphereData : PBCodable <NSCopying> {
    struct { unsigned char applicableTimeSec : 1; unsigned char d2vtecDphi2 : 1; unsigned char d2vtecDtheta2 : 1; unsigned char d2vtecDthetaphi : 1; unsigned char dvtecDphi : 1; unsigned char dvtecDtheta : 1; unsigned char estimatorAgeSec : 1; unsigned char geodeticAltitudeM : 1; unsigned char hmaxKm : 1; unsigned char latitudeDeg : 1; unsigned char longitudeDeg : 1; unsigned char pd2vtecDphi2D2vtecDphi2 : 1; unsigned char pd2vtecDtheta2D2vtecDtheta2 : 1; unsigned char pd2vtecDthetadphiD2vtecDthetadphi : 1; unsigned char pdvtecDphiDvtecDphi : 1; unsigned char pdvtecDthetaDvtecDtheta : 1; unsigned char phmaxHmaxKm2 : 1; unsigned char pvtec0Vtec0 : 1; unsigned char vtec0 : 1; } _has;
}

@property (nonatomic) char hasLatitudeDeg;
@property (nonatomic) double latitudeDeg;
@property (nonatomic) char hasLongitudeDeg;
@property (nonatomic) double longitudeDeg;
@property (nonatomic) char hasGeodeticAltitudeM;
@property (nonatomic) double geodeticAltitudeM;
@property (nonatomic) char hasApplicableTimeSec;
@property (nonatomic) double applicableTimeSec;
@property (nonatomic) char hasHmaxKm;
@property (nonatomic) double hmaxKm;
@property (nonatomic) char hasVtec0;
@property (nonatomic) double vtec0;
@property (nonatomic) char hasDvtecDtheta;
@property (nonatomic) double dvtecDtheta;
@property (nonatomic) char hasDvtecDphi;
@property (nonatomic) double dvtecDphi;
@property (nonatomic) char hasD2vtecDtheta2;
@property (nonatomic) double d2vtecDtheta2;
@property (nonatomic) char hasD2vtecDthetaphi;
@property (nonatomic) double d2vtecDthetaphi;
@property (nonatomic) char hasD2vtecDphi2;
@property (nonatomic) double d2vtecDphi2;
@property (nonatomic) char hasEstimatorAgeSec;
@property (nonatomic) double estimatorAgeSec;
@property (nonatomic) char hasPhmaxHmaxKm2;
@property (nonatomic) double phmaxHmaxKm2;
@property (nonatomic) char hasPvtec0Vtec0;
@property (nonatomic) double pvtec0Vtec0;
@property (nonatomic) char hasPdvtecDthetaDvtecDtheta;
@property (nonatomic) double pdvtecDthetaDvtecDtheta;
@property (nonatomic) char hasPdvtecDphiDvtecDphi;
@property (nonatomic) double pdvtecDphiDvtecDphi;
@property (nonatomic) char hasPd2vtecDtheta2D2vtecDtheta2;
@property (nonatomic) double pd2vtecDtheta2D2vtecDtheta2;
@property (nonatomic) char hasPd2vtecDthetadphiD2vtecDthetadphi;
@property (nonatomic) double pd2vtecDthetadphiD2vtecDthetadphi;
@property (nonatomic) char hasPd2vtecDphi2D2vtecDphi2;
@property (nonatomic) double pd2vtecDphi2D2vtecDphi2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
