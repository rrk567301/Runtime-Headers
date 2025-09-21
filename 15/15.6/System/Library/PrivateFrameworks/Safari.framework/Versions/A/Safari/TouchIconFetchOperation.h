@class NSImage, _WKRemoteObjectInterface;

@interface TouchIconFetchOperation : WBSTouchIconFetchOperation {
    _WKRemoteObjectInterface *_faviconObserverInterface;
    NSImage *_candidateOSXUserAgentIcon;
    char _didTryWithIPhoneUserAgent;
}

- (void).cxx_destruct;
- (char)_shouldTryDownloadingIconsWithIPhoneUserAgentForProposeIcon:(id)a0 isFavicon:(char)a1;
- (void)_tryWithIPhoneUserAgent;
- (void)didCompleteWithResult:(id)a0;

@end
