@class NSString;

@interface PXSidebarDocumentsEnablementObserver : NSObject <PXSettingsKeyObserver>

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
