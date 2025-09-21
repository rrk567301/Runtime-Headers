@class NSNumber, NSDictionary, NSMutableDictionary;

@interface MTRDeviceClusterData : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_attributes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *dataVersion;
@property (retain, nonatomic) NSNumber *pendingDataVersion;
@property (readonly, nonatomic) NSDictionary *attributes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataVersion:(id)a0 attributes:(id)a1;
- (BOOL)isEqualToClusterData:(id)a0;
- (void)removeValueForAttribute:(id)a0;
- (void)storeValue:(id)a0 forAttribute:(id)a1;

@end
