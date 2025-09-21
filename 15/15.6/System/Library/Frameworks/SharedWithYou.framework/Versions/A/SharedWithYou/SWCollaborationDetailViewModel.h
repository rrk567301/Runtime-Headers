@class NSString, NSArray, SWHighlight;

@interface SWCollaborationDetailViewModel : NSObject <SWHighlightCenterDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_highlightCenter;
    void /* unknown type, empty encoding */ _collaborationInfo;
    void /* unknown type, empty encoding */ _highlight;
    void /* unknown type, empty encoding */ _customContentTitle;
    void /* unknown type, empty encoding */ _headerFallback;
    void /* unknown type, empty encoding */ _customCollaborators;
    void /* unknown type, empty encoding */ _manageButtonTitle;
    void /* unknown type, empty encoding */ _showManageButton;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ itemProvider;
@property (nonatomic, weak) void /* unknown type, empty encoding */ cloudSharingServiceDelegate;
@property (nonatomic, retain) SWHighlight *highlight;
@property (nonatomic, copy) NSString *customContentTitle;
@property (nonatomic, copy) NSArray *customCollaborators;
@property (nonatomic, copy) NSString *manageButtonTitle;
@property (nonatomic) char showManageButton;

- (id)init;
- (void).cxx_destruct;
- (void)highlightCenterHighlightsDidChange:(id)a0;
- (id)initWithItemProvider:(id)a0;
- (id)initWithHighlight:(id)a0;

@end
