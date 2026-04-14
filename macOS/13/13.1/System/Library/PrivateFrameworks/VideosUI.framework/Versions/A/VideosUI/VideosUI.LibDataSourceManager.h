@interface VideosUI.LibDataSourceManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _isLoading;
    void /* unknown type, empty encoding */ _showHomeSharingLibraryUnavailableAlert;
    void /* unknown type, empty encoding */ _libSources;
    void /* unknown type, empty encoding */ _selectedLibSource;
    void /* unknown type, empty encoding */ _isOffline;
    void /* unknown type, empty encoding */ familyMemberServiceRequest;
}

- (void)handleHomeSharingUpdates;
- (void)handleAccountChanges;
- (void)handleNetworkChanges;

@end
