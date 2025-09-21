@class NSData, NSString;

@interface AWDWifiAssociation : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char band : 1; unsigned char channel : 1; unsigned char deauthReason : 1; unsigned char error : 1; unsigned char noise : 1; unsigned char phymode : 1; unsigned char signal : 1; unsigned char txrate : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasError;
@property (nonatomic) unsigned int error;
@property (nonatomic) char hasChannel;
@property (nonatomic) int channel;
@property (nonatomic) char hasSignal;
@property (nonatomic) int signal;
@property (readonly, nonatomic) char hasBssidOui;
@property (retain, nonatomic) NSData *bssidOui;
@property (readonly, nonatomic) char hasSecurity;
@property (retain, nonatomic) NSString *security;
@property (nonatomic) char hasDeauthReason;
@property (nonatomic) int deauthReason;
@property (readonly, nonatomic) char hasDeauthSourceOui;
@property (retain, nonatomic) NSData *deauthSourceOui;
@property (nonatomic) char hasNoise;
@property (nonatomic) int noise;
@property (nonatomic) char hasTxrate;
@property (nonatomic) int txrate;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) char hasPhymode;
@property (nonatomic) unsigned int phymode;
@property (nonatomic) char hasBand;
@property (nonatomic) int band;
@property (readonly, nonatomic) char hasPrivateMacType;
@property (retain, nonatomic) NSString *privateMacType;

- (void)dealloc;
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
