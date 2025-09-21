@interface GCUINavigationCommand : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long identifier;
@property (readonly) long long type;
@property (readonly) double timestamp;
@property (readonly) unsigned long long phase;
@property (readonly) double value;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithIdentifier:(unsigned long long)a0 type:(long long)a1 timestamp:(double)a2 phase:(unsigned long long)a3 value:(double)a4;

@end
