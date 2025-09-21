@class NSURL, NSString;

@interface CPLResourceIdentity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *fingerPrint;
@property (copy, nonatomic) NSString *stableHash;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) struct CGSize { double width; double height; } imageDimensions;
@property (nonatomic, getter=isAvailable) BOOL available;
@property (copy, nonatomic) NSString *fileUTI;

+ (id)identityFromStoredIdentity:(id)a0;
+ (id)fingerPrintForFD:(int)a0 error:(id *)a1;
+ (BOOL)isValidMMCSV2Signature:(id)a0;
+ (id)fingerPrintForData:(id)a0 error:(id *)a1;
+ (id)fingerPrintForFileAtURL:(id)a0 error:(id *)a1;
+ (id)storageNameForFingerPrint:(id)a0 fileUTI:(id)a1 bucket:(id *)a2;
+ (id)extensionForFileUTI:(id)a0;
+ (id)identityForStorageName:(id)a0;
+ (id)fileUTIForExtension:(id)a0;

- (id)realStableHash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)identityForStorage;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;

@end
