@class NSString, NSURL;

@interface BADownload : NSObject <NSCoding, NSSecureCoding, NSCopying> {
    long long _internalState;
    unsigned long long _clientSpecifiedFileSize;
    NSURL *_stagedDownloadedFileURL;
}

@property (class, readonly) char supportsSecureCoding;

@property long long priority;
@property long long necessity;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain) NSString *applicationGroupIdentifier;
@property (readonly, nonatomic) long long state;
@property (readonly) char isEssential;

+ (id)classesForSerialization;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)syncTo:(id)a0;
- (char)cloneDownloadToFinalDestinationURL:(id *)a0 error:(id *)a1;
- (id)copyAsNonEssential;
- (id)initPrivatelyWithApplicationGroupIdentifier:(id)a0;

@end
