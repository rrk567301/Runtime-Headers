@class NSImage, NSString;

@interface PasswordManagerListCellData : NSObject

@property (retain, nonatomic) NSImage *iconImage;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *issueTypesDescription;

+ (id)cellDataForSavedPassword:(id)a0;
+ (id)cellDataForPasswordWarning:(id)a0;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 username:(id)a1 issueTypesDescription:(id)a2;

@end
