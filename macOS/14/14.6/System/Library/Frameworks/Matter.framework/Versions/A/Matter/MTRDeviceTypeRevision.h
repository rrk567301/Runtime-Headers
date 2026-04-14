@class NSNumber;

@interface MTRDeviceTypeRevision : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSNumber *deviceTypeID;
@property (readonly, copy, nonatomic) NSNumber *deviceTypeRevision;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceTypeID:(id)a0 revision:(id)a1;

@end
