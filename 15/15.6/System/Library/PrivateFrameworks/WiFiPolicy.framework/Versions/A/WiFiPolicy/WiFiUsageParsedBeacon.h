@class NSString, NSMutableDictionary, NSData, NSNumber;

@interface WiFiUsageParsedBeacon : NSObject

@property (retain, nonatomic) NSString *bssid;
@property (retain, nonatomic) NSString *ssid;
@property (nonatomic) unsigned int shortSSID;
@property (retain, nonatomic) NSString *apName;
@property (nonatomic) NSNumber *isBeaconAtHeRate;
@property (nonatomic) unsigned short beaconInterval;
@property (nonatomic) unsigned short capabilities;
@property (nonatomic) unsigned char channel;
@property (nonatomic) unsigned char band;
@property (nonatomic) char colocated6Ghz;
@property (nonatomic) char colocated6GhzIsPSC;
@property (nonatomic) char hasHT;
@property (nonatomic) unsigned short htInfo;
@property (nonatomic) unsigned char htAMPDUParams;
@property (nonatomic) unsigned short htExtendedCapabilities;
@property (nonatomic) unsigned int htTxBFCapabilities;
@property (nonatomic) unsigned char htAntennaSelection;
@property (nonatomic) unsigned char htRxNSS;
@property (nonatomic) unsigned char htTxNSS;
@property (nonatomic) char hasVHT;
@property (nonatomic) unsigned int vhtInfo;
@property (nonatomic) unsigned short vhtRxMCSMap;
@property (nonatomic) unsigned short vhtRxMaxRate;
@property (nonatomic) unsigned short vhtTxMCSMap;
@property (nonatomic) unsigned short vhtTxMaxRate;
@property (nonatomic) unsigned char vhtRxNSS;
@property (nonatomic) unsigned char vhtTxNSS;
@property (nonatomic) char hasHE;
@property (retain, nonatomic) NSData *heMACInfo;
@property (retain, nonatomic) NSData *hePHYInfo;
@property (nonatomic) unsigned short heRxMCSMap80MHz;
@property (nonatomic) unsigned short heTxMCSMap80MHz;
@property (nonatomic) unsigned short heRxMCSMap160MHz;
@property (nonatomic) unsigned short heTxMCSMap160MHz;
@property (nonatomic) unsigned short heRxMCSMap8080MHz;
@property (nonatomic) unsigned short heTxMCSMap8080MHz;
@property (nonatomic) unsigned char heRxNSS;
@property (nonatomic) unsigned char heTxNSS;
@property (nonatomic) char hasEHT;
@property (nonatomic) char hasColocatedMLD2G;
@property (nonatomic) char hasColocatedMLD5G;
@property (nonatomic) char hasColocatedMLD6G;
@property (nonatomic) unsigned char ap6gPowerMode;
@property (retain, nonatomic) NSMutableDictionary *taggedIEList;
@property (retain, nonatomic) NSMutableDictionary *vendorIEList;
@property (retain, nonatomic) NSMutableDictionary *extendedIEList;
@property (nonatomic) char parsingSuccessful;
@property (readonly, nonatomic) NSData *htMCSSet;

+ (void)initialize;
+ (id)config;
+ (void)defaults;
+ (id)isValidIE:(unsigned char)a0 ofLen:(unsigned char)a1 withIsExtended:(char)a2;
+ (void)updateConfig;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)parseHE6GHz:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (char)parseHTCapa:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (char)parseApName:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (char)parseHECapa:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (id)initWithBeaconData:(id)a0 andAdditionalMetadata:(id)a1;
- (char)parseBeaconIE:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (char)parseDSSS:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (char)parseEHTCapa:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (char)parseExtendedIE:(unsigned char)a0 from:(char *)a1 length:(unsigned long long)a2 endOfBuffer:(char *)a3;
- (char)parseHTOp:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (char)parseNormalIE:(unsigned char)a0 from:(char *)a1 length:(unsigned long long)a2 endOfBuffer:(char *)a3;
- (char)parseRNR:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (char)parseSSID:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;
- (char)parseVHTCapa:(char *)a0 length:(unsigned long long)a1 endOfBuffer:(char *)a2;

@end
