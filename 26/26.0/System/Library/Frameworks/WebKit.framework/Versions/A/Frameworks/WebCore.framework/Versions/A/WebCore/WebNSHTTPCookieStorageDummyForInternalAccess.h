@class NSHTTPCookieStorageInternal;

@interface WebNSHTTPCookieStorageDummyForInternalAccess : NSObject {
    struct RetainPtr<NSHTTPCookieStorageInternal> { NSHTTPCookieStorageInternal *m_ptr; } _internal;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
