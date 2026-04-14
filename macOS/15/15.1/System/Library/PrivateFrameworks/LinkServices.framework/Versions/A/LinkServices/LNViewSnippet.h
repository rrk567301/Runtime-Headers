@class NSString, NSData;

@interface LNViewSnippet : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *targetBundleIdentifier;
@property (readonly, copy, nonatomic) NSData *viewData;
@property (readonly, copy, nonatomic) NSData *snippetModelData;
@property (readonly, copy, nonatomic) NSString *snippetModelBundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainerBundleIdentifier:(id)a0 targetBundleIdentifier:(id)a1 snippetModelData:(id)a2 snippetModelBundleIdentifier:(id)a3;
- (id)initWithContainerBundleIdentifier:(id)a0 targetBundleIdentifier:(id)a1 viewData:(id)a2;
- (id)_initWithContainerBundleIdentifier:(id)a0 targetBundleIdentifier:(id)a1 viewData:(id)a2 snippetModelData:(id)a3 snippetModelBundleIdentifier:(id)a4;
- (id)initWithContainerBundleIdentifier:(id)a0 targetBundleIdentifier:(id)a1 snippetModelData:(id)a2;

@end
