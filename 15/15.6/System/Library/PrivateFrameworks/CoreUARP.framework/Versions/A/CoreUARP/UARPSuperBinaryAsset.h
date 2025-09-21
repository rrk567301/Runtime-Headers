@class NSDate, NSArray, NSURL, UARPSuperBinaryMetaDataTable, NSDictionary, NSObject, NSMutableArray, UARPAssetTag, UARPAssetVersion, NSMutableData;
@protocol OS_os_log;

@interface UARPSuperBinaryAsset : NSObject {
    NSObject<OS_os_log> *_log;
    unsigned long long _formatVersion;
    NSMutableArray *_tlvs;
    NSMutableArray *_payloads;
    NSURL *_plist;
    NSURL *_plistMetaData;
    UARPSuperBinaryMetaDataTable *_metaDataTable;
    NSDictionary *_plistDictionary;
    struct UARPSuperBinaryHeader { unsigned int superBinaryFormatVersion; unsigned int superBinaryHeaderLength; unsigned int superBinaryLength; struct UARPVersion { unsigned int major; unsigned int minor; unsigned int release; unsigned int build; } superBinaryVersion; unsigned int superBinaryMetadataOffset; unsigned int superBinaryMetadataLength; unsigned int payloadHeadersOffset; unsigned int payloadHeadersLength; } _superBinaryHeader;
    NSMutableData *_metaData;
}

@property (readonly) NSArray *tlvs;
@property (readonly) NSArray *payloads;
@property (readonly) UARPAssetVersion *assetVersion;
@property (readonly) UARPAssetTag *assetTag;
@property (readonly) NSDate *timeCreated;
@property (readonly) NSURL *url;

+ (char)versionFromBNIString:(id)a0 version:(struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;
+ (char)versionFromString:(id)a0 version:(struct UARPVersion { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (char)writeToURL:(id)a0 error:(out id *)a1;
- (void)addMetaDataTLV:(id)a0;
- (id)prepareMetaData;
- (void)addPayload:(id)a0;
- (id)computeHash;
- (char)decomposeToURL:(id)a0 error:(id *)a1;
- (char)expandHeadersAndTLVs:(id *)a0;
- (char)expandPlistWithPayloadsFolder:(id)a0 error:(id *)a1;
- (char)exportSuperBinaryContentToFilepath:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
- (id)initWithFormatVersion:(unsigned long long)a0 assetVersion:(id)a1;
- (id)initWithFormatVersion:(id)a0 majorVersion:(id)a1 minorVersion:(id)a2 releaseVersion:(id)a3 buildVersion:(id)a4;
- (id)initWithPlist:(id)a0 metadataPlist:(id)a1;
- (id)initWithURL:(id)a0 assetTag:(id)a1;
- (char)parseFromPlistFormatVersion:(id)a0 error:(id *)a1;
- (char)parseFromPlistSuperBinaryMetaDataTLVs:(id)a0 payloadsURL:(id)a1 error:(id *)a2;
- (char)parseFromPlistSuperBinaryMetaDataValuesTable:(id *)a0;
- (char)parseFromPlistSuperBinaryPayloads:(id)a0 payloadsURL:(id)a1 error:(id *)a2;
- (char)parseFromPlistSuperBinaryVersion:(id)a0 error:(id *)a1;
- (id)payloadData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
- (void)processBVERVersionString:(id)a0;
- (void)processVersionString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeMetadata;
- (char)writeToURL:(id)a0 payloadStartOffset:(unsigned long long)a1 error:(out id *)a2;

@end
