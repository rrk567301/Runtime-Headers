@class WiFiAnalyticsAWDWiFiNWActivityBtCoexReqestReason;

@interface WiFiAnalyticsAWDWiFiNWActivityBtCoex : PBCodable <NSCopying> {
    struct { unsigned char a2dpdeny : 1; unsigned char a2dpgrant : 1; unsigned char aptxafterpm : 1; unsigned char audiodeny : 1; unsigned char audiogrant : 1; unsigned char btabort : 1; unsigned char cts : 1; unsigned char duration : 1; unsigned char grant : 1; unsigned char pm : 1; unsigned char psnullretrycount : 1; unsigned char request : 1; unsigned char sniffdeny : 1; unsigned char sniffgrant : 1; unsigned char ucodehighlatency : 1; unsigned char wlanrxpreempt : 1; unsigned char wlantxpreempt : 1; } _has;
}

@property (nonatomic) char hasRequest;
@property (nonatomic) unsigned int request;
@property (nonatomic) char hasGrant;
@property (nonatomic) unsigned int grant;
@property (nonatomic) char hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) char hasBtabort;
@property (nonatomic) unsigned int btabort;
@property (nonatomic) char hasPsnullretrycount;
@property (nonatomic) unsigned int psnullretrycount;
@property (nonatomic) char hasUcodehighlatency;
@property (nonatomic) unsigned int ucodehighlatency;
@property (nonatomic) char hasCts;
@property (nonatomic) unsigned int cts;
@property (nonatomic) char hasPm;
@property (nonatomic) unsigned int pm;
@property (nonatomic) char hasWlantxpreempt;
@property (nonatomic) unsigned int wlantxpreempt;
@property (nonatomic) char hasWlanrxpreempt;
@property (nonatomic) unsigned int wlanrxpreempt;
@property (nonatomic) char hasAptxafterpm;
@property (nonatomic) unsigned int aptxafterpm;
@property (nonatomic) char hasAudiogrant;
@property (nonatomic) unsigned int audiogrant;
@property (nonatomic) char hasAudiodeny;
@property (nonatomic) unsigned int audiodeny;
@property (nonatomic) char hasA2dpgrant;
@property (nonatomic) unsigned int a2dpgrant;
@property (nonatomic) char hasA2dpdeny;
@property (nonatomic) unsigned int a2dpdeny;
@property (nonatomic) char hasSniffgrant;
@property (nonatomic) unsigned int sniffgrant;
@property (nonatomic) char hasSniffdeny;
@property (nonatomic) unsigned int sniffdeny;
@property (readonly, nonatomic) char hasBtrequestReason;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiNWActivityBtCoexReqestReason *btrequestReason;

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
