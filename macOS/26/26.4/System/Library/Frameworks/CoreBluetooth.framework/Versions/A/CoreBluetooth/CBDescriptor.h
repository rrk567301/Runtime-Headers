@class CBCharacteristic, CBPeripheral, NSNumber;

@interface CBDescriptor : CBAttribute

@property (weak, nonatomic) CBCharacteristic *characteristic;
@property (retain) id value;
@property (readonly, nonatomic) CBPeripheral *peripheral;
@property (readonly, nonatomic) NSNumber *handle;

- (void).cxx_destruct;
- (void)invalidate;
- (id)description;
- (id)handleValueUpdated:(id)a0;
- (id)handleValueWritten:(id)a0;
- (id)initWithCharacteristic:(id)a0 dictionary:(id)a1;

@end
