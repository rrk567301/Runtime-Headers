@class NSURL, NSArray, NSString;

@interface _WKApplicationManifestIcon : NSObject <NSSecureCoding> {
    struct RetainPtr<NSURL> { NSURL *m_ptr; } _src;
    struct RetainPtr<NSArray<NSString *>> { NSArray *m_ptr; } _sizes;
    struct RetainPtr<NSString> { NSString *m_ptr; } _type;
    struct RetainPtr<NSArray<NSNumber *>> { NSArray *m_ptr; } _purposes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *src;
@property (readonly, copy, nonatomic) NSArray *sizes;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *purposes;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoreIcon:(const void *)a0;

@end
