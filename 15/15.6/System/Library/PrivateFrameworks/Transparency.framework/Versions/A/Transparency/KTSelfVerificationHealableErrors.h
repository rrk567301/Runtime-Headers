@class NSArray, NSMutableDictionary, NSDictionary, NSMutableArray;

@interface KTSelfVerificationHealableErrors : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSMutableArray *_accountHealableErrors;
@property (retain) NSMutableDictionary *_deviceIdToHealableErrors;
@property unsigned long long healableState;
@property (readonly) NSArray *accountHealableErrors;
@property (readonly) NSDictionary *deviceIdToHealableErrors;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addAccountHealableError:(unsigned long long)a0;
- (void)addDeviceHealableError:(unsigned long long)a0 deviceId:(id)a1;
- (void)addHealableState:(unsigned long long)a0;
- (void)removeHealableState:(unsigned long long)a0;

@end
