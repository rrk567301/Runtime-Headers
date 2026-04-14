@class NSString, NSSet, NSNumber;

@interface SiriVirtualDeviceResolution.CapabilityDescription : NSObject <NSSecureCoding, NSCopying> {
    void /* function */ key;
    void /* function */ valueSet;
    void /* unknown type, empty encoding */ valueRange;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSSet *valueSet;
@property (nonatomic, readonly) NSString *capabilityKey;
@property (nonatomic, readonly) NSNumber *valueRangeLowerBound;
@property (nonatomic, readonly) NSNumber *valueRangeUpperBound;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 lowerbound:(double)a1 upperbound:(double)a2;
- (id)initWithKey:(id)a0 valueSet:(id)a1;

@end
