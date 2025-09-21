@class NSArray, NSString, CNContactPosterDataChangeRequest;

@interface CNContactImageSaveRequest : NSObject

@property (readonly, nonatomic) CNContactPosterDataChangeRequest *posterDataChangeRequest;
@property (retain, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) NSArray *images;
@property (readonly, nonatomic) long long operationType;
@property (readonly, nonatomic) NSString *attributeName;

+ (id)saveRequestToCreateImage:(id)a0 forContactIdentifier:(id)a1;
+ (id)saveRequestToCreateImages:(id)a0 forContactIdentifier:(id)a1;
+ (id)saveRequestToDeleteImageForIdentifier:(id)a0;
+ (id)saveRequestToDeleteImageForIdentifiers:(id)a0;
+ (id)saveRequestToDeleteImagesForContactIdentifiers:(id)a0;

- (void).cxx_destruct;
- (id)initWithContactImages:(id)a0 contactIdentifiers:(id)a1 attributeName:(id)a2 operationType:(long long)a3;

@end
