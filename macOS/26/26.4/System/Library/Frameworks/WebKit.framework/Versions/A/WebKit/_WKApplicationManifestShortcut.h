@class NSString, NSURL, NSArray;

@interface _WKApplicationManifestShortcut : NSObject <NSSecureCoding> {
    struct RetainPtr<NSString> { NSString *m_ptr; } _name;
    struct RetainPtr<NSURL> { NSURL *m_ptr; } _url;
    struct RetainPtr<NSArray<_WKApplicationManifestIcon *>> { NSArray *m_ptr; } _icons;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSArray *icons;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoreShortcut:(const void *)a0;

@end
