@class NSImage, _WKRemoteObjectInterface;

@interface TouchIconFetchOperation : WBSTouchIconFetchOperation {
    _WKRemoteObjectInterface *_faviconObserverInterface;
    NSImage *_candidateOSXUserAgentIcon;
    BOOL _didTryWithIPhoneUserAgent;
}

- (void).cxx_destruct;
- (void)didCompleteWithResult:(id)a0;
- (void)_tryWithIPhoneUserAgent;
- (BOOL)_shouldTryDownloadingIconsWithIPhoneUserAgentForProposeIcon:(id)a0 isFavicon:(BOOL)a1;

@end
