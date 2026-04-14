@class NSDictionary, NSString;

@interface AMSXDDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *JSONDictionary;
@property (readonly) NSString *identifier;
@property long long type;

+ (id)deviceFromIdentifier:(id)a0;
+ (id)allPairedDevices;
+ (id)activePairedDevices;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)a0;
- (id)initWithDeviceID:(id)a0 type:(long long)a1;

@end
