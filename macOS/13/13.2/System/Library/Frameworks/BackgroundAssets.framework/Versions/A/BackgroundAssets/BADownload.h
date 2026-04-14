@class NSString, NSURL;

@interface BADownload : NSObject <NSCoding, NSSecureCoding, NSCopying> {
    long long _internalState;
    NSURL *_stagedDownloadedFileURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property long long priority;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain) NSString *applicationGroupIdentifier;
@property (readonly, nonatomic) long long state;

+ (id)classesForSerialization;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)syncTo:(id)a0;
- (BOOL)cloneDownloadToFinalDestinationURL:(id *)a0 error:(id *)a1;
- (id)initPrivatelyWithApplicationGroupIdentifier:(id)a0;

@end
