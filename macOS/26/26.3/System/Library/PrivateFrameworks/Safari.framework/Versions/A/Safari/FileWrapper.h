@class NSURL;

@interface FileWrapper : NSFileWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *originatingURL;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)writeToUniqueFileInDirectory:(id)a0 attemptedURL:(id *)a1 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)a2;

@end
