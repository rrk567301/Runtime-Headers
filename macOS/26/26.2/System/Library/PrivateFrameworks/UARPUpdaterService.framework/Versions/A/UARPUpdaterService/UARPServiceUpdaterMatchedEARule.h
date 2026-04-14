@class NSString;

@interface UARPServiceUpdaterMatchedEARule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *eaIdentifier;
@property (readonly) NSString *accessorySerialNumber;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithEAIdentifier:(id)a0 accessorySerialNumber:(id)a1;

@end
