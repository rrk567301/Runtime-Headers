@class NSString;
@protocol WBSPerSitePreferenceManagerDelegate;

@interface ContentBlockersPreferenceManager : WBSContentBlockersPreferenceManager <PerSitePreferenceManager>

@property (weak, nonatomic) id<WBSPerSitePreferenceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isConfigurable;

@end
