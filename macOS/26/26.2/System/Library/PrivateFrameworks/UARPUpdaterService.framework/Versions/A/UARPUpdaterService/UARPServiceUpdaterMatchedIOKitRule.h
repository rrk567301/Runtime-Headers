@class NSString;

@interface UARPServiceUpdaterMatchedIOKitRule : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) unsigned long long registryEntryID;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 registryEntryID:(unsigned long long)a1;
- (void)dealloc;

@end
