@class NSString;

@interface GTCaptureArchiveFilenameOverride : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *originalFilename;
@property (retain) NSString *overrideFilename;
@property unsigned long long exportToolVersion;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;

@end
