@class WFFileRepresentation;

@interface WFFileWebResource : WFWebResource

@property (readonly, nonatomic) WFFileRepresentation *file;

+ (BOOL)supportsSecureCoding;

- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)MIMEType;
- (id)initWithFile:(id)a0;
- (id)loadInWKWebView:(id)a0;

@end
