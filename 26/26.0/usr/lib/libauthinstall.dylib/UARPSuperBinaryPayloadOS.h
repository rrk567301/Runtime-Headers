@class NSData, NSString, UARPAssetTagOS, NSMutableDictionary, NSMutableString, UARPAssetVersionOS, NSMutableArray, FTABFileOS, NSNumber;

@interface UARPSuperBinaryPayloadOS : NSObject {
    FTABFileOS *_ftab;
    NSMutableString *_keyManifest;
    unsigned long long _uinitNumber;
    NSString *_ticketPrefix;
    BOOL _ticketNeedsUnitNumber;
    BOOL _suffixNeedsUnitNumber;
    BOOL _prefixNeedsUnitNumber;
    NSMutableArray *_trimmedTlvs;
    NSMutableArray *_subfiles;
}

@property (readonly) UARPAssetTagOS *tag;
@property (readonly) UARPAssetVersionOS *version;
@property (readonly) NSMutableArray *tlvs;
@property (readonly) NSData *payloadData;
@property (readonly) NSData *metaData;
@property (readonly) BOOL needsHostPersonalization;
@property (copy) NSData *manifest;
@property unsigned int boardID;
@property unsigned int chipID;
@property unsigned long long ecID;
@property (copy) NSData *nonce;
@property unsigned char productionMode;
@property unsigned char securityDomain;
@property unsigned char securityMode;
@property (copy) NSNumber *trustedOverride;
@property (copy) NSNumber *demote;
@property (readonly) NSMutableDictionary *tssRequest;
@property (readonly) NSMutableArray *measurements;

- (id)description;
- (void).cxx_destruct;
- (void)addSubfile:(id)a0 tag:(id)a1;
- (id)getMeasurements;
- (id)getTlvs;
- (id)composeTSSRequest:(unsigned long long)a0;
- (id)composeTSSRequest:(unsigned long long)a0 asMeasurement:(BOOL)a1;
- (BOOL)expandTLVs;
- (id)getManifest;
- (BOOL)getNeedsHostPersonalization;
- (id)getTssRequest;
- (id)initWithData:(id)a0 metaData:(id)a1 tag:(id)a2 version:(id)a3;
- (id)personalizedData;
- (id)personalizedMetaData;
- (void)processMeasurementsForTSSOptions:(id)a0 unitNumber:(unsigned long long)a1 asMeasurement:(BOOL)a2;
- (void)processTLVsForPersonalization;
- (BOOL)queryTatsuSigningServer:(id)a0 ssoOnly:(BOOL)a1 error:(id *)a2;
- (void)removeSubfile:(id)a0 tag:(id)a1;
- (id)requiredTSSOptions;
- (id)tatsuMeasurements:(unsigned long long)a0;
- (id)tssKeyName:(id)a0 unitNumber:(unsigned long long)a1;
- (id)tssRequestAsString;

@end
