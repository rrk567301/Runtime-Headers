@class NSString;

@interface _WKContentWorldConfiguration : NSObject <NSCopying, NSSecureCoding> {
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } _name;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char allowAccessToClosedShadowRoots;
@property (nonatomic) char allowAutofill;
@property (nonatomic) char allowElementUserInfo;
@property (nonatomic) char disableLegacyBuiltinOverrides;

+ (char)accessInstanceVariablesDirectly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;

@end
