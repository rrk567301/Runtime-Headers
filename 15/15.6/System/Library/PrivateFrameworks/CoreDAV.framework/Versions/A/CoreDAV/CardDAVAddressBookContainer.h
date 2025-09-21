@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer

@property (retain, nonatomic) NSString *maxResourceSize;
@property (retain, nonatomic) NSString *maxImageSize;
@property (retain, nonatomic) NSURL *meCardURL;
@property (nonatomic) char isGuardianRestricted;
@property (nonatomic) char isImageUploadRestricted;
@property (readonly, nonatomic) char isAddressBook;
@property (readonly, nonatomic) char isSharedAddressBook;
@property (readonly, nonatomic) char isSearchAddressBook;

+ (id)copyPropertyMappingsForParser;

- (id)description;
- (void).cxx_destruct;
- (void)applyParsedProperties:(id)a0;

@end
