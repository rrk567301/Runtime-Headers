@class NSData;

@interface STSNDEFRecord : NSObject <NSSecureCoding> {
    unsigned char _firstOctet;
    NSData *_identifier;
    NSData *_type;
    NSData *_payload;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char typeNameFormat;
@property (copy, nonatomic) NSData *type;
@property (copy, nonatomic) NSData *identifier;
@property (copy, nonatomic) NSData *payload;

+ (id)recordsWithTNF:(unsigned char)a0 type:(id)a1 identifier:(id)a2 payload:(id)a3 chunkSize:(unsigned long long)a4 outError:(unsigned long long *)a5;
+ (id)ndefRecordsWithData:(id)a0;
+ (BOOL)_parseNDEFData:(id)a0 outRecords:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned char)header;
- (void)setHeader:(unsigned char)a0;
- (BOOL)messageBegin;
- (void)setMessageBegin:(BOOL)a0;
- (BOOL)messageEnd;
- (void)setMessageEnd:(BOOL)a0;
- (BOOL)shortRecord;
- (void)setShortRecord:(BOOL)a0;
- (BOOL)chunked;
- (void)setChunked:(BOOL)a0;
- (BOOL)_idLengthPresent;
- (void)_setIdLengthPresent:(BOOL)a0;
- (id)initWithFormat:(unsigned char)a0 type:(id)a1 identifier:(id)a2 payload:(id)a3;
- (BOOL)isWiFiAwareConfigurationRecord;
- (BOOL)isBluetoothLEConfigurationRecord;
- (BOOL)isNfcConfigurationRecord;
- (BOOL)isHandoverRequestRecord;
- (BOOL)isHandoverSelectRecord;
- (BOOL)isCollisionResolutionRecord;
- (BOOL)isAlternativeCarrierRecord;
- (BOOL)isHandoverSelectErrorRecord;
- (BOOL)isISO18013DeviceEngagementRecord;
- (BOOL)isISO18013ReaderEngagementRecord;
- (unsigned long long)getCarrierPowerStateFromAlternativeCarrierRecord;
- (id)getCarrierDataReferenceFromAlternativeCarrierRecord;
- (id)getAuxiliaryDataReferencesFromAlternativeCarrierRecord;

@end
