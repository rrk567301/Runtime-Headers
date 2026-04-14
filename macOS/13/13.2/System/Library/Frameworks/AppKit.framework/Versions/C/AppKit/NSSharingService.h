@class NSString, NSImage, NSArray, NSURL;
@protocol NSSharingServiceDelegate;

@interface NSSharingService : NSObject {
    id _reserved;
}

@property (weak) id<NSSharingServiceDelegate> delegate;
@property (readonly, copy) NSString *title;
@property (readonly) NSImage *image;
@property (readonly) NSImage *alternateImage;
@property (copy) NSString *menuItemTitle;
@property (copy) NSArray *recipients;
@property (copy) NSString *subject;
@property (readonly, copy) NSString *messageBody;
@property (readonly, copy) NSURL *permanentLink;
@property (readonly, copy) NSString *accountName;
@property (readonly, copy) NSArray *attachmentFileURLs;

+ (void)_loadShareKit;
+ (Class)_SHKSharingServiceClass;
+ (Class)_SHKSharingServicePickerClass;
+ (BOOL)_usesItemProvider;
+ (id)_sharingServiceNamed:(id)a0 allowInactive:(BOOL)a1;
+ (void)_getSharingServiceNamed:(id)a0 allowInactive:(BOOL)a1 completion:(id /* block */)a2;
+ (void)getSharingServiceNamed:(id)a0 completion:(id /* block */)a1;
+ (id)sharingServiceNamed:(id)a0;
+ (void)_safelySetDelegate:(id)a0 service:(id)a1;
+ (id)_urlFromItem:(id)a0;
+ (BOOL)_urlIsFolder:(id)a0;
+ (BOOL)_urlIsShared:(id)a0;
+ (id)_filteredSharingServices:(id)a0 forCloudSharingWithItems:(id)a1;
+ (void)getSharingServicesForItems:(id)a0 mask:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)sharingServicesForItems:(id)a0 mask:(unsigned long long)a1;
+ (void)getSharingServicesForItems:(id)a0 completion:(id /* block */)a1;
+ (id)sharingServicesForItems:(id)a0;
+ (id)sharingServicesForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 mask:(unsigned long long)a2;
+ (void)_addRecentEmailServiceToDefaultsWithSubject:(id)a0 recipients:(id)a1;
+ (id)_cloudSharingErrorClasses;

- (void)dealloc;
- (id)name;
- (id)init;
- (long long)type;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (id)subtitle;
- (void)setSubtitle:(id)a0;
- (id)parameters;
- (void)setParameters:(id)a0;
- (void)_commonInit;
- (BOOL)_blocksActionWhenModal:(SEL)a0;
- (id)initWithName:(id)a0 title:(id)a1 image:(id)a2 alternateImage:(id)a3 type:(long long)a4 handler:(id /* block */)a5;
- (id)initWithTitle:(id)a0 image:(id)a1 alternateImage:(id)a2 handler:(id /* block */)a3;
- (BOOL)canPerformWithItems:(id)a0;
- (void)canPerformWithItems:(id)a0 completion:(id /* block */)a1;
- (void)performWithItems:(id)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)setShkSharingService:(id)a0;
- (id)shkSharingService;
- (BOOL)isCatalyst;
- (void)setParameterValue:(id)a0 forKey:(id)a1;
- (id)_preProcessingJavaScriptURL;
- (id)_touchBarImage;
- (void)_setIsAddPeopleService:(BOOL)a0;
- (void)_setLocalizedPasswordActionTitle:(id)a0;
- (void)_setApplicationIcon:(id)a0;
- (void)_setSharingApplicationURL:(id)a0;
- (void)_setParticipantDetails:(id)a0;
- (void)_setSectionTitleForAuxiliarySwitches:(id)a0;
- (void)_setPrimaryCheckboxTitle:(id)a0;
- (void)_setPrimaryCheckboxState:(long long)a0;
- (void)_setSecondaryCheckboxTitle:(id)a0;
- (void)_setSecondaryCheckboxState:(long long)a0;
- (void)_setRootFolderTitle:(id)a0;
- (void)_setFolderSubitemName:(id)a0;
- (void)_setHeaderIcon:(id)a0;
- (id)_savedServiceState;
- (void)_setInitialServiceState:(id)a0;

@end
