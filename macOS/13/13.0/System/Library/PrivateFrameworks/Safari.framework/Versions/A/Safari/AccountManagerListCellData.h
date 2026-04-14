@class NSImage, NSString;

@interface AccountManagerListCellData : NSObject

@property (retain, nonatomic) NSImage *iconImage;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *monogramCharacter;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *issueTypesDescription;

+ (id)cellDataForSavedAccount:(id)a0;
+ (id)cellDataForPasswordWarning:(id)a0;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 monogramCharacter:(id)a1 username:(id)a2 issueTypesDescription:(id)a3;

@end
