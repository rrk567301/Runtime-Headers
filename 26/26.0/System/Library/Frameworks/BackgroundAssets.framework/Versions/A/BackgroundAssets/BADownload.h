@class NSString, NSURL;

@interface BADownload : NSObject <NSCoding, NSSecureCoding, NSCopying> {
    BOOL _isForManagedAssetPack;
    long long _internalState;
    unsigned long long _clientSpecifiedFileSize;
    NSURL *_stagedDownloadedFileURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long priority;
@property long long necessity;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain) NSString *applicationGroupIdentifier;
@property (readonly, nonatomic) long long state;
@property (readonly) BOOL isEssential;

+ (id)classesForSerialization;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)syncTo:(id)a0;
- (BOOL)cloneDownloadToFinalDestinationURL:(id *)a0 error:(id *)a1;
- (id)copyAsNonEssential;
- (id)initPrivatelyWithApplicationGroupIdentifier:(id)a0;

@end
