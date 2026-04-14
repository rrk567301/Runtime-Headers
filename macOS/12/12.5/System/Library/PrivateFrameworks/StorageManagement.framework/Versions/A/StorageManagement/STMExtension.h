@class NSString;

@interface STMExtension : NSObject <STMExtension>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeFolder;
+ (id)homeVolume;
+ (id)localizedFileSize:(long long)a0;

- (BOOL)isHidden;
- (void)beginRequestWithExtensionContext:(id)a0;
- (id)categories;
- (id)localizedStringForCategory:(id)a0;
- (id)localizedHeaderButtonTitle;
- (id)localizedHeaderMessage;
- (id)representedApplication;
- (id)managedPaths;
- (BOOL)showsSummaryPanel;
- (long long)totalSpaceUsed;
- (BOOL)showItemPaths;
- (BOOL)showRevealButton;
- (id)localizedRevealButtonTitle;
- (id)customHeaderIcon;
- (id)resourceItems;
- (id)deleteResourceItems:(id)a0;
- (id)showResourceItems:(id)a0;
- (id)tipItems;
- (id)performTipAction:(id)a0;
- (id)performHeaderAction;
- (id)performSummaryAction:(id)a0;
- (id)confirmationTextForDelete:(id)a0;
- (id)confirmationTextForTipAction:(id)a0;
- (id)confirmationTextForSummaryAction:(id)a0;
- (id)localizedStringFromFramework:(id)a0;

@end
