@class NSHTTPCookieStorageInternal;

@interface WebNSHTTPCookieStorageDummyForInternalAccess : NSObject {
    struct RetainPtr<NSHTTPCookieStorageInternal> { NSHTTPCookieStorageInternal *m_ptr; } _internal;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
