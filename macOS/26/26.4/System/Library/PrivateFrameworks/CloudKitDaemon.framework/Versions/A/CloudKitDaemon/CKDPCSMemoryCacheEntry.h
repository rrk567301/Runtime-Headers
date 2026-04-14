@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject

@property (retain, nonatomic) CKDPCSData *pcsData;
@property double lastAccess;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)init;
- (id)description;

@end
