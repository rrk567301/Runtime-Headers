@class QLURLHandler, NSArray, UTType;

@interface QLURLExtensionPreview : QLExtensionPreview

@property (retain) UTType *contentType;
@property (retain) QLURLHandler *urlHandler;
@property (retain) NSArray *additionalURLsAccessed;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 contentType:(id)a1;
- (void)updateForExternalResourceAccessWithExtension:(id)a0 context:(id)a1;
- (id)initWithURLHandler:(id)a0 contentType:(id)a1;

@end
