@class NSString, NSNumber, NSData;

@interface ASDJobAsset : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *assetType;
@property (copy, nonatomic) NSString *assetURL;
@property (copy, nonatomic) NSNumber *bytesTotal;
@property (copy, nonatomic) NSData *dPInfo;
@property (copy, nonatomic) NSNumber *expectedDiskspace;
@property (copy, nonatomic) NSData *hashArrayData;
@property (copy, nonatomic) NSNumber *hashType;
@property (copy, nonatomic) NSNumber *initialODRSize;
@property (nonatomic) char isExternal;
@property (nonatomic) char isLocallyCacheable;
@property (nonatomic) char isZipStreamable;
@property (copy, nonatomic) NSNumber *numberOfBytesToHash;
@property (copy, nonatomic) NSData *sinfs;
@property (copy, nonatomic) NSString *storeDownloadKey;
@property (copy, nonatomic) NSString *variantID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
