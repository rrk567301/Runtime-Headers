@class HKDeviceContext, NSArray;

@interface HKDeviceKeyValueStorageGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKDeviceContext *deviceContext;
@property (readonly, nonatomic) NSArray *storageEntries;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceContext:(id)a0 storageEntries:(id)a1;

@end
