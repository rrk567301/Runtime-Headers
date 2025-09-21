@class SKFilesystem, NSString, NSArray, NSURL, SKTemporaryPassphrase;

@interface SKDiskImageCreateParams : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long diReadPassphraseExtraFlags;
@property (nonatomic) long long format;
@property unsigned long long numBlocks;
@property (copy, nonatomic) NSString *volumeName;
@property (retain, nonatomic) NSURL *sourceImage;
@property (retain, nonatomic) NSURL *sourceFolder;
@property (retain, nonatomic) SKFilesystem *fsFormat;
@property (retain, nonatomic) NSArray *shadowURLs;
@property (retain, nonatomic) SKTemporaryPassphrase *temporaryPassphrase;
@property (nonatomic) long long encryption;
@property (nonatomic) BOOL stdinPassPhrase;

+ (id)getDescriptorWithEncryption:(long long)a0;
+ (id)getDescriptorWithFormat:(long long)a0;
+ (id)getDiskImageEncryptionDescriptors;
+ (id)getDiskImageFormatDescriptors;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithFolder:(id)a0;
- (void)setPassphrase:(const char *)a0 encryptionMethod:(long long)a1;
- (id)diConvertParamsWithOutputURL:(id)a0 error:(id *)a1;
- (id)diCreateParamsWithURL:(id)a0 error:(id *)a1;
- (id)diCreatorFromFolderWithURL:(id)a0 error:(id *)a1;
- (id)initWithDisk:(id)a0;
- (id)initWithDisk:(id)a0 format:(long long)a1;
- (id)initWithDiskImage:(id)a0;
- (id)initWithDiskImage:(id)a0 format:(long long)a1;
- (id)initWithDiskImage:(id)a0 format:(long long)a1 shadowURLs:(id)a2;
- (id)initWithFolder:(id)a0 volumeName:(id)a1 format:(long long)a2;
- (id)initWithFormat:(long long)a0 sourceImage:(id)a1 sourceFolder:(id)a2 volumeName:(id)a3 numBlocks:(unsigned long long)a4;
- (id)initWithFormat:(long long)a0 sourceImage:(id)a1 sourceFolder:(id)a2 volumeName:(id)a3 numBlocks:(unsigned long long)a4 fsFormat:(id)a5 shadowURLs:(id)a6;
- (id)initWithNumBlocks:(unsigned long long)a0 volumeName:(id)a1;
- (id)initWithNumBlocks:(unsigned long long)a0 volumeName:(id)a1 format:(long long)a2;
- (id)initWithNumBlocks:(unsigned long long)a0 volumeName:(id)a1 format:(long long)a2 fsFormat:(id)a3;

@end
