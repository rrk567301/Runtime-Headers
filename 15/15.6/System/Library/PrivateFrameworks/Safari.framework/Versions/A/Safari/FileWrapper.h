@class NSURL;

@interface FileWrapper : NSFileWrapper <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *originatingURL;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)writeToURL:(id)a0 shouldSetPrivacySensitiveQuarantineProperties:(char)a1;
- (char)writeToUniqueFileInDirectory:(id)a0 attemptedURL:(id *)a1 shouldSetPrivacySensitiveQuarantineProperties:(char)a2;

@end
