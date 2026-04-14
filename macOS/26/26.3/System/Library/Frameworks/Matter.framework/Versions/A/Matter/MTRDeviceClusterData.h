@class NSNumber, NSDictionary, NSMutableDictionary;

@interface MTRDeviceClusterData : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_attributes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *dataVersion;
@property (retain, nonatomic) NSNumber *pendingDataVersion;
@property (readonly, nonatomic) NSDictionary *attributes;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDataVersion:(id)a0 attributes:(id)a1;
- (BOOL)isEqualToClusterData:(id)a0;
- (void)removeValueForAttribute:(id)a0;
- (void)storeValue:(id)a0 forAttribute:(id)a1;

@end
