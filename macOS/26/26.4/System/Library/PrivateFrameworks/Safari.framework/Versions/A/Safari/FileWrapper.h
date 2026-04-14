@class NSURL;

@interface FileWrapper : NSFileWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *originatingURL;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)writeToUniqueFileInDirectory:(id)a0 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
