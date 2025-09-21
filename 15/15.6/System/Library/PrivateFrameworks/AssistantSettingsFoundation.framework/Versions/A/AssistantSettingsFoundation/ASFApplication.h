@class NSString;

@interface ASFApplication : NSObject

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *localizedName;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compareByName:(id)a0;
- (id)initWithBundleId:(id)a0 localizedName:(id)a1;

@end
