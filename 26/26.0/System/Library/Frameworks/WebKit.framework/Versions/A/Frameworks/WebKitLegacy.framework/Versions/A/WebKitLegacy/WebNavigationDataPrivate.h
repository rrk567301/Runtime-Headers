@class NSString, NSURLRequest, NSURLResponse;

@interface WebNavigationDataPrivate : NSObject {
    struct RetainPtr<NSString> { NSString *m_ptr; } url;
    struct RetainPtr<NSString> { NSString *m_ptr; } title;
    struct RetainPtr<NSURLRequest> { NSURLRequest *m_ptr; } originalRequest;
    struct RetainPtr<NSURLResponse> { NSURLResponse *m_ptr; } response;
    BOOL hasSubstituteData;
    struct RetainPtr<NSString> { NSString *m_ptr; } clientRedirectSource;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
