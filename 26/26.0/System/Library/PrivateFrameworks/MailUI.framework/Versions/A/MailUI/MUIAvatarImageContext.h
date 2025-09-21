@class NSString, NSURL, EMCategory;
@protocol ECEmailAddressConvertible;

@interface MUIAvatarImageContext : NSObject <EFPubliclyDescribable>

@property (readonly, nonatomic) EMCategory *category;
@property (readonly, nonatomic) id<ECEmailAddressConvertible> emailAddress;
@property (readonly, nonatomic) NSString *businessLogoID;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly) BOOL reducePlaceholderImage;
@property (retain, nonatomic) NSURL *brandIndicatorLocation;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly, nonatomic) double scale;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 emailAddress:(id)a1 businessLogoID:(id)a2 isAuthenticated:(BOOL)a3 reducePlaceholderImage:(BOOL)a4 brandIndicatorLocation:(id)a5;
- (id)initWithMessageListItem:(id)a0;
- (id)initWithMessageListItem:(id)a0 reducePlaceholderImage:(BOOL)a1;

@end
