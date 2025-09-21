@class NSString;

@interface UARPServiceUpdaterMatchedIOKitRule : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *identifier;
@property (readonly) unsigned long long registryEntryID;

- (void)dealloc;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 registryEntryID:(unsigned long long)a1;

@end
