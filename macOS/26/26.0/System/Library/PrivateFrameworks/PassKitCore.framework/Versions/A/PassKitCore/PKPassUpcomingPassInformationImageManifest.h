@class NSDictionary, NSString;

@interface PKPassUpcomingPassInformationImageManifest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *items;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, nonatomic) BOOL reuseExisting;

+ (id)createFromDictionary:(id)a0 bundle:(id)a1 imageName:(id)a2 reuseAllowed:(BOOL)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)itemClosestMatchingScreenScale:(double)a0;
- (id)_initWithImageName:(id)a0;
- (BOOL)composeFromDictionary:(id)a0 bundle:(id)a1 reuseAllowed:(BOOL)a2;
- (id)itemForScreenScale:(double)a0;

@end
