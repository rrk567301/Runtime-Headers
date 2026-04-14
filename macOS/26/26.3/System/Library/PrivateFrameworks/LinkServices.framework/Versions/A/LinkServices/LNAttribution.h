@class NSData, NSString;

@interface LNAttribution : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *snippetModelData;
@property (readonly, copy, nonatomic) NSString *snippetModelBundleIdentifier;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSnippetModelData:(id)a0 snippetModelBundleIdentifier:(id)a1;

@end
