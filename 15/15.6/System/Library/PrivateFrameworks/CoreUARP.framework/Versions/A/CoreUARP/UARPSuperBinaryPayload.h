@class NSData, FTABFile, NSString, NSMutableDictionary, NSMutableString, UARPAssetTag, UARPAssetVersion, NSMutableArray, NSNumber;

@interface UARPSuperBinaryPayload : NSObject {
    FTABFile *_ftab;
    NSMutableString *_keyManifest;
    unsigned long long _uinitNumber;
    NSString *_ticketPrefix;
    char _ticketNeedsUnitNumber;
    char _suffixNeedsUnitNumber;
    char _prefixNeedsUnitNumber;
    NSMutableArray *_trimmedTlvs;
    NSMutableArray *_subfiles;
}

@property (readonly) UARPAssetTag *tag;
@property (readonly) UARPAssetVersion *version;
@property (readonly) NSMutableArray *tlvs;
@property (readonly) NSData *payloadData;
@property (readonly) NSData *metaData;
@property (readonly) char needsHostPersonalization;
@property (retain) NSData *manifest;
@property unsigned int boardID;
@property unsigned int chipID;
@property unsigned long long ecID;
@property (retain) NSData *nonce;
@property unsigned char productionMode;
@property unsigned char securityDomain;
@property unsigned char securityMode;
@property (retain) NSNumber *trustedOverride;
@property (retain) NSNumber *demote;
@property (readonly) NSMutableDictionary *tssRequest;
@property (readonly) NSMutableArray *measurements;

- (id)description;
- (void).cxx_destruct;
- (void)addSubfile:(id)a0 tag:(id)a1;
- (id)getMeasurements;
- (id)getTlvs;
- (id)composeTSSRequest:(unsigned long long)a0;
- (id)composeTSSRequest:(unsigned long long)a0 asMeasurement:(char)a1;
- (char)expandTLVs;
- (id)getManifest;
- (char)getNeedsHostPersonalization;
- (id)getTssRequest;
- (id)initWithData:(id)a0 metaData:(id)a1 tag:(id)a2 version:(id)a3;
- (id)personalizedData;
- (id)personalizedMetaData;
- (void)processMeasurementsForTSSOptions:(id)a0 unitNumber:(unsigned long long)a1 asMeasurement:(char)a2;
- (void)processTLVsForPersonalization;
- (char)queryTatsuSigningServer:(id)a0 ssoOnly:(char)a1 error:(id *)a2;
- (void)removeSubfile:(id)a0 tag:(id)a1;
- (id)requiredTSSOptions;
- (id)tatsuMeasurements:(unsigned long long)a0;
- (id)tssKeyName:(id)a0 unitNumber:(unsigned long long)a1;
- (id)tssRequestAsString;

@end
