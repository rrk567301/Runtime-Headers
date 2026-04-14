@class NSString;

@interface MCMimeCharset : NSObject <ECMIMECharset, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long encoding;
@property (readonly, copy, nonatomic) NSString *charsetName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL canBeUsedForOutgoingMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)charsetForEncoding:(unsigned long long)a0;
+ (id)preferredMimeCharset;
+ (id)allMimeCharsets;
+ (unsigned long long)encodingVariantForEncoding:(unsigned long long)a0 address:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCFEncoding:(unsigned int)a0;

@end
