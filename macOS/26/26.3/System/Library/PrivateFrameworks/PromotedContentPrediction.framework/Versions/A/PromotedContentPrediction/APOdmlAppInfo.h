@class NSString;

@interface APOdmlAppInfo : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) unsigned long long adamID;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)a0 adamID:(unsigned long long)a1;

@end
