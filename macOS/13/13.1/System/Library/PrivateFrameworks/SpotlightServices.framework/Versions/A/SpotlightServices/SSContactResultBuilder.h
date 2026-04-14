@class NSArray, CNContact, NSString, NSDateComponents;

@interface SSContactResultBuilder : SSResultBuilder {
    int _type;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSArray *phoneNumbers;
@property (retain, nonatomic) NSArray *addresses;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (retain, nonatomic) NSArray *rawPhoneNumbers;
@property (retain, nonatomic) NSArray *alternateNames;
@property (retain, nonatomic) NSDateComponents *birthdayComponents;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) NSString *personIdentifier;
@property (retain, nonatomic) NSString *personQueryIdentifier;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL scopesSearchOnEngagement;

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;
+ (id)infoTupleWithKeyTitle:(id)a0 values:(id)a1;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)initWithContact:(id)a0;
- (id)buildCommand;
- (id)buildResult;
- (id)buildCompactCardSection;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)buildDetailedRowCardSection;
- (id)buildPreviewButtonItems;
- (id)buildAction;
- (id)initWithContactEntity:(id)a0;
- (id)infoTupleForPhoneNumbers;
- (id)rowsForKey:(id)a0 withValues:(id)a1 commandButtonItemForString:(id /* block */)a2;
- (id)buildHeaderResultForEntity;
- (id)buildFooterResultForEntity;
- (id)buildSocialMediaResultForEntity;

@end
