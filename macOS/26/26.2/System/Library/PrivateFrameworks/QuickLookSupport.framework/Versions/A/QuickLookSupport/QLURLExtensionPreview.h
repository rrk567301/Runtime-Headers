@class QLURLHandler, NSArray, UTType;

@interface QLURLExtensionPreview : QLExtensionPreview

@property (retain) UTType *contentType;
@property (retain) QLURLHandler *urlHandler;
@property (retain) NSArray *additionalURLsAccessed;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)a0 contentType:(id)a1;
- (void)updateForExternalResourceAccessWithExtension:(id)a0 context:(id)a1;
- (id)initWithURLHandler:(id)a0 contentType:(id)a1;

@end
