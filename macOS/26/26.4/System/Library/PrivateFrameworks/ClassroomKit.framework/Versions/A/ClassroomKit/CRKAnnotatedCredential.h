@class NSDictionary;
@protocol CRKKeychainItem;

@interface CRKAnnotatedCredential : NSObject

@property (readonly, nonatomic) id<CRKKeychainItem> credential;
@property (readonly, copy, nonatomic) NSDictionary *annotation;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCredential:(id)a0 annotation:(id)a1;

@end
