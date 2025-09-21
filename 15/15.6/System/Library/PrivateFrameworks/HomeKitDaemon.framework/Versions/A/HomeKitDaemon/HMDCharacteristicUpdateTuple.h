@class HMDCharacteristic, HMDCharacteristicResponse;

@interface HMDCharacteristicUpdateTuple : HMFObject

@property (retain, nonatomic) id value;
@property (readonly, nonatomic) HMDCharacteristic *characteristic;
@property (readonly, nonatomic) id updatedValue;
@property (readonly, nonatomic, getter=isBroadcast) char broadcast;
@property (retain, nonatomic) HMDCharacteristicResponse *characteristicResponse;
@property (readonly, nonatomic) unsigned long long reasons;

+ (id)characteristicUpdateTuplesWithCharacteristics:(id)a0 isBroadcast:(char)a1;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithCharacteristic:(id)a0 updatedValue:(id)a1 isBroadcast:(char)a2;
- (id)initWithCharacteristic:(id)a0 updatedValue:(id)a1 isBroadcast:(char)a2 reasons:(unsigned long long)a3;

@end
