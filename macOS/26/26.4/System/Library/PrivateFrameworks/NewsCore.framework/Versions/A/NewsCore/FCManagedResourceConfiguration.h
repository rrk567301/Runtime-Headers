@class NSString;

@interface FCManagedResourceConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *resourceID;
@property (readonly, nonatomic) long long refreshRate;

- (id)initWithResourceID:(id)a0 refreshRate:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
