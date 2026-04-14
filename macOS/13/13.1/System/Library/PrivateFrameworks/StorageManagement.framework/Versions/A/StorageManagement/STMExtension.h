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
- (id)representedApplication;
- (id)managedPaths;
- (id)localizedStringForCategory:(id)a0;
- (id)resourceItems;
- (id)confirmationTextForDelete:(id)a0;
- (id)deleteResourceItems:(id)a0;
- (id)showResourceItems:(id)a0;
- (id)tipItems;
- (id)confirmationTextForTipAction:(id)a0;
- (id)performTipAction:(id)a0;
- (id)localizedHeaderButtonTitle;
- (id)performHeaderAction;
- (id)localizedHeaderMessage;
- (id)customHeaderIcon;
- (BOOL)showItemPaths;
- (BOOL)showRevealButton;
- (id)localizedRevealButtonTitle;
- (long long)totalSpaceUsed;
- (BOOL)showsSummaryPanel;
- (id)performSummaryAction:(id)a0;
- (id)confirmationTextForSummaryAction:(id)a0;
- (id)localizedStringFromFramework:(id)a0;

@end
