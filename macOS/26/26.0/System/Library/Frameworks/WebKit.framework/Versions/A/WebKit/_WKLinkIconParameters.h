@class NSString, NSDictionary, NSURL, NSMutableDictionary, NSNumber;

@interface _WKLinkIconParameters : NSObject {
    struct RetainPtr<NSURL> { NSURL *m_ptr; } _url;
    long long _iconType;
    struct RetainPtr<NSString> { NSString *m_ptr; } _mimeType;
    struct RetainPtr<NSNumber> { NSNumber *m_ptr; } _size;
    struct RetainPtr<NSMutableDictionary> { NSMutableDictionary *m_ptr; } _attributes;
}

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long iconType;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, copy, nonatomic) NSNumber *size;
@property (readonly, copy, nonatomic) NSDictionary *attributes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithLinkIcon:(const void *)a0;

@end
