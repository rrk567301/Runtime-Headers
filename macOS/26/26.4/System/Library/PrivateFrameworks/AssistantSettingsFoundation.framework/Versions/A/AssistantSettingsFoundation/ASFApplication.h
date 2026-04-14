@class NSString;

@interface ASFApplication : NSObject

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *localizedName;

- (long long)compareByName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleId:(id)a0 localizedName:(id)a1;

@end
