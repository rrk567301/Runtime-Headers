@class NSArray, CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *vouchers;
@property (retain, nonatomic) CKOperationConfiguration *operationConfiguration;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) char allowsCellularAccess;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)createDefaultOperationConfiguration;

@end
