@class NSURL;

@interface FileWrapper : NSFileWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *originatingURL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)writeToURL:(id)a0 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)a1;
- (BOOL)writeToUniqueFileInDirectory:(id)a0 attemptedURL:(id *)a1 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)a2;

@end
