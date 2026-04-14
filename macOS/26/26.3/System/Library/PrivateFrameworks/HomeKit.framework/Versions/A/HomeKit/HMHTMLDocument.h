@class NSString, NSAttributedString, _HMDocument;

@interface HMHTMLDocument : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) _HMDocument *document;
@property (readonly, copy) NSString *stringValue;
@property (readonly, copy) NSAttributedString *attributedString;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)description;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)validateAndReturnError:(id *)a0;

@end
