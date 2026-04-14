@class NSURL, NSDate;

@interface _KSFileFile : _KSFileEntry <NSSecureCoding, _KSBlobSaver> {
    int _protectionClass;
    NSURL *_url;
    NSDate *_lastModified;
    unsigned long long _offset;
    unsigned long long _size;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (int)protectionFromURL:(id)a0;

- (void)consistencyCheck;
- (id)contents;
- (unsigned long long)size;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)URL;
- (id)description;
- (id)lastModified;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)saveTo:(id)a0;
- (void)loadAttributesFromURL:(id)a0;
- (void)restoreToPath:(id)a0;
- (void)saveAttributesToURL:(id)a0;

@end
