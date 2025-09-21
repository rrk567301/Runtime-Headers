@interface CNUICoreWhitelistedContactsControllerOptions : NSObject

@property (class, readonly, nonatomic) CNUICoreWhitelistedContactsControllerOptions *macOptions;
@property (class, readonly, nonatomic) CNUICoreWhitelistedContactsControllerOptions *macOptionsLocal;
@property (class, readonly, nonatomic) CNUICoreWhitelistedContactsControllerOptions *iosOptions;

@property (readonly, nonatomic) char shouldPrepopulateEmptyWhitelist;
@property (readonly, nonatomic) char shouldRequireConfirmationOfChanges;

- (id)init;
- (id)initWithShouldPrepopulateEmptyWhitelist:(char)a0 shouldRequireConfirmationOfChanges:(char)a1;

@end
