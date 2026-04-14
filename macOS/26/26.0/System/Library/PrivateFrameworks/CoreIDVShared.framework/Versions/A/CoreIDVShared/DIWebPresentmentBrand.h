@class NSString, NSDictionary, NSURL;

@interface DIWebPresentmentBrand : NSObject

@property (readonly, nonatomic) NSString *brandIdentifier;
@property (readonly, nonatomic) NSDictionary *localizedNames;
@property (readonly, nonatomic) NSURL *logoURL;

- (void).cxx_destruct;
- (id)initWithBrandIdentifier:(id)a0 localizedNames:(id)a1 logoURL:(id)a2;

@end
