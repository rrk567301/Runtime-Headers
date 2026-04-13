@class NSString;

@interface WKSharingServicePickerDelegate : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate> {
    void *_menuProxy;
    struct RetainPtr<NSSharingServicePicker> { void *m_ptr; } _picker;
    BOOL _filterEditingServices;
    BOOL _handleEditingReplacement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSharingServicePickerDelegate;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)sharingService:(id)a0 willShareItems:(id)a1;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 mask:(unsigned long long)a2 proposedSharingServices:(id)a3;
- (void)setPicker:(id)a0;
- (void *)menuProxy;
- (void)setMenuProxy:(void *)a0;
- (void)setFiltersEditingServices:(BOOL)a0;
- (void)setHandlesEditingReplacement:(BOOL)a0;

@end
