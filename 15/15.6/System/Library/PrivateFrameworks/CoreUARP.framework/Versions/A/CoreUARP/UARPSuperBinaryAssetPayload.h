@class NSData, NSString, NSArray, NSURL, NSDictionary, NSMutableArray, UARPAssetTag, NSObject, UARPAssetVersion, NSMutableData;
@protocol OS_os_log;

@interface UARPSuperBinaryAssetPayload : NSObject {
    NSObject<OS_os_log> *_log;
    NSString *_tag;
    UARPAssetTag *_payloadTag;
    UARPAssetVersion *_assetVersion;
    NSString *_vendorVersionString;
    NSMutableArray *_tlvs;
    NSMutableArray *_composeTLVs;
    NSURL *_url;
    NSURL *_superBinaryURL;
    NSString *_friendlyName;
    NSDictionary *_dict;
    char _isWritable;
    unsigned int _blockSize;
    int _compression;
    struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } _uarpVersion;
    struct UARPPayloadHeader { unsigned int payloadHeaderLength; unsigned int payloadTag; struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } payloadVersion; unsigned int payloadMetadataOffset; unsigned int payloadMetadataLength; unsigned int payloadOffset; unsigned int payloadLength; } _payloadHeader;
    NSMutableData *_compressionHeaders;
    unsigned int _compressionHeaderIndex;
    char _allowCompressionHeaders;
    NSMutableData *_metaData;
    NSURL *_compressedPayloadURL;
}

@property (readonly) NSArray *tlvs;
@property (readonly, copy) NSData *payload;
@property (readonly) NSData *metaData;
@property (readonly) UARPAssetTag *payloadTag;
@property (readonly) char needsCompression;
@property (readonly) char allowCompressionHeaders;
@property (readonly, copy) NSData *compressionHeaders;
@property (readonly) unsigned long long compressionHeaderIndex;
@property (readonly) unsigned long long formatVersion;

- (id)description;
- (id)init;
- (char)isValid;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)addMetaDataTLV:(id)a0;
- (id)hashPayloadWithAlgorithm:(int)a0 error:(id *)a1;
- (id)prepareMetaData;
- (void)addMetaDataTLVs:(id)a0;
- (char)appendCompressedPayloadToFile:(id)a0 error:(out id *)a1;
- (char)appendPayloadToFile:(id)a0 bytesWritten:(unsigned long long *)a1 error:(id *)a2;
- (id)compressPayloadChunk:(id)a0 offset:(unsigned int)a1 error:(id *)a2;
- (char)compressPayloadURLToFileHandle:(id)a0 error:(id *)a1;
- (char)expandDictionaryWithPayloadsFolder:(id)a0 metaDataTable:(id)a1 error:(id *)a2;
- (char)expandPayloadToURL:(id)a0 payloadFilename:(id)a1 superbinary:(id)a2 offset:(unsigned long long)a3 length:(unsigned long long)a4 error:(id *)a5;
- (char)expandPayloadToURL:(id)a0 superbinary:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 error:(id *)a4;
- (id)hashMetaData;
- (id)hashMetaDataWithAlgorithm:(int)a0 error:(id *)a1;
- (id)initWithPayloadHeader:(struct UARPPayloadHeader { unsigned int x0; unsigned int x1; struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0;
- (id)initWithPayloadTag:(id)a0 assetVersion:(id)a1;
- (id)initWithPayloadTag:(id)a0 assetVersion:(id)a1 writable:(char)a2;
- (id)initWithPayloadTag:(id)a0 majorVersion:(unsigned long long)a1 minorVersion:(unsigned long long)a2 releaseVersion:(unsigned long long)a3 buildVersion:(unsigned long long)a4;
- (id)initWithTag:(id)a0 majorVersion:(id)a1 minorVersion:(id)a2 releaseVersion:(id)a3 buildVersion:(id)a4;
- (char)parseFromPlistPayloadMetaDataTLVs:(id)a0 payloadsURL:(id)a1 error:(id *)a2;
- (char)parseFromPlistVersion:(id *)a0;
- (id)prepareData;
- (unsigned long long)preparePackedTag;
- (char)prepareUarpVersion:(struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a0;
- (unsigned long long)preparedDataLength;
- (void)processBVERVersionString:(id)a0;
- (void)processVersionString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeMetadata;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangePayload;
- (char)setPayloadToContentsOfFile:(id)a0 friendlyName:(id)a1 error:(id *)a2;
- (char)setPayloadToContentsOfURL:(id)a0 friendlyName:(id)a1;
- (char)setPayloadToData:(id)a0;
- (void)setSuperBinaryURL:(id)a0;
- (unsigned long long)unpreparedDataLength;
- (char)updateFormatVersion:(unsigned long long)a0;
- (char)writePayloadData:(id)a0 offset:(unsigned long long)a1 error:(out id *)a2;

@end
