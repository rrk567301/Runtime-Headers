@class NSString;

@interface LNSuggestionsRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic, getter=isOnScreen) char onScreen;
@property (readonly, nonatomic, getter=isExplicitRequest) char explicitRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 onScreen:(char)a1 explicitRequest:(char)a2;

@end
