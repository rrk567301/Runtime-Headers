@class NSString;

@interface _LSEnumeratedBundleInfo : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL isPlaceholder;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)a0 isPlaceholder:(BOOL)a1;

@end
