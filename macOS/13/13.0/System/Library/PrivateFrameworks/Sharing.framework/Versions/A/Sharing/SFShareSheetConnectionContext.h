@class NSString, NSArray;

@interface SFShareSheetConnectionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSArray *uniformTypeIdentifiers;
@property (readonly, copy, nonatomic) NSArray *assetIdentifiers;
@property (readonly, copy, nonatomic) NSArray *urls;
@property (readonly, nonatomic) BOOL shouldSuggestFamilyMembers;
@property (readonly, nonatomic) BOOL isSharePlayAvailable;
@property (copy, nonatomic) NSString *hostAppBundleIdentifier;
@property (nonatomic) BOOL shouldNotSuggestPeople;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionIdentifier:(id)a0 uniformTypeIdentifiers:(id)a1 assetIdentifiers:(id)a2 urls:(id)a3 shouldSuggestFamilyMembers:(BOOL)a4 isSharePlayAvailable:(BOOL)a5;
- (id)initWithSessionIdentifier:(id)a0 uniformTypeIdentifiers:(id)a1 assetIdentifiers:(id)a2 urls:(id)a3 shouldSuggestFamilyMembers:(BOOL)a4;

@end
