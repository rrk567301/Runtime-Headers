@class NSString;

@interface UARPServiceUpdaterMatchedEARule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *eaIdentifier;
@property (readonly) NSString *accessorySerialNumber;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEAIdentifier:(id)a0 accessorySerialNumber:(id)a1;

@end
