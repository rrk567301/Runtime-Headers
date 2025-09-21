@class NSString;

@interface _LSEnumeratedBundleInfo : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) char isPlaceholder;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 isPlaceholder:(char)a1;

@end
