@class NSArray;

@interface SPCBPeripheralKeyResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *peripherals;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPeripherals:(id)a0;
- (void).cxx_destruct;

@end
