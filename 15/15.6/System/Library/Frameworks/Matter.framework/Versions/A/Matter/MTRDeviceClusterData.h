@class NSNumber, NSDictionary, NSMutableDictionary;

@interface MTRDeviceClusterData : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_attributes;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *dataVersion;
@property (readonly, nonatomic) NSDictionary *attributes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataVersion:(id)a0 attributes:(id)a1;
- (char)isEqualToClusterData:(id)a0;
- (void)removeValueForAttribute:(id)a0;
- (void)storeValue:(id)a0 forAttribute:(id)a1;

@end
