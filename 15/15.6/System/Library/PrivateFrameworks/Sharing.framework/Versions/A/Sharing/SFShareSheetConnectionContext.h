@class NSString, NSArray, NSDictionary;

@interface SFShareSheetConnectionContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSArray *uniformTypeIdentifiers;
@property (readonly, copy, nonatomic) NSArray *assetIdentifiers;
@property (readonly, copy, nonatomic) NSArray *urls;
@property (readonly, nonatomic) char shouldSuggestFamilyMembers;
@property (readonly, nonatomic) char isSharePlayAvailable;
@property (readonly, nonatomic) char supportsCollaboration;
@property (copy, nonatomic) NSString *hostAppBundleIdentifier;
@property (nonatomic) char shouldNotSuggestPeople;
@property (copy, nonatomic) NSDictionary *sandboxExtensionsByfileURLPath;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 uniformTypeIdentifiers:(id)a1 assetIdentifiers:(id)a2 urls:(id)a3 shouldSuggestFamilyMembers:(char)a4 isSharePlayAvailable:(char)a5;
- (id)initWithSessionIdentifier:(id)a0 uniformTypeIdentifiers:(id)a1 assetIdentifiers:(id)a2 urls:(id)a3 shouldSuggestFamilyMembers:(char)a4 isSharePlayAvailable:(char)a5 supportsCollaboration:(char)a6;

@end
