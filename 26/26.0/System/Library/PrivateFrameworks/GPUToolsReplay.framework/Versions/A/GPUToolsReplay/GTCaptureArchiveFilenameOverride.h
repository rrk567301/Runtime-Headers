@class NSString;

@interface GTCaptureArchiveFilenameOverride : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *originalFilename;
@property (retain) NSString *overrideFilename;
@property unsigned long long exportToolVersion;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
