@class NSString, NSAttributedString, _HMDocument;

@interface HMHTMLDocument : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) _HMDocument *document;
@property (readonly, copy) NSString *stringValue;
@property (readonly, copy) NSAttributedString *attributedString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (char)validateAndReturnError:(id *)a0;
- (id)initWithData:(id)a0 error:(id *)a1;

@end
