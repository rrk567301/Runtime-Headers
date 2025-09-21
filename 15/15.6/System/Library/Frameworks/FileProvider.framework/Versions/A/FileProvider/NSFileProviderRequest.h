@class NSUUID, NSURL, NSFileProviderDomainVersion;

@interface NSFileProviderRequest : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSUUID *_finderIdentifier;
@property (class, readonly, nonatomic) NSUUID *_dsIdentifier;
@property (class, readonly, nonatomic) NSUUID *_dmIdentifier;
@property (class, readonly, nonatomic) NSUUID *_filesIdentifier;
@property (class, readonly, nonatomic) NSUUID *_fpdIdentifier;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isSpeculativeDownload) char speculativeDownload;
@property (retain, nonatomic) NSUUID *requestingApplicationIdentifier;
@property (copy, nonatomic) NSURL *requestingExecutable;
@property (retain, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (readonly, nonatomic) char isSystemRequest;
@property (readonly, nonatomic) char isFileViewerRequest;

+ (id)requestFromTheSystem;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIsSpeculativeDownload:(char)a0;

@end
