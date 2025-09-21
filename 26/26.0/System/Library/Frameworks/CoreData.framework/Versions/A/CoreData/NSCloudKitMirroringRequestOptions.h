@class NSArray, CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *vouchers;
@property (retain, nonatomic) CKOperationConfiguration *operationConfiguration;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) BOOL allowsCellularAccess;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)init;
- (id)createDefaultOperationConfiguration;

@end
