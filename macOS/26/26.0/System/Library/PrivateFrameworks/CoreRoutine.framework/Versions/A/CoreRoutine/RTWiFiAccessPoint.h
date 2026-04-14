@class NSString, NSDate;

@interface RTWiFiAccessPoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *mac;
@property (readonly, nonatomic) long long rssi;
@property (readonly, nonatomic) long long channel;
@property (readonly, nonatomic) double age;
@property (readonly, nonatomic) NSDate *date;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFirstJSONDictionary:(id)a0;
- (id)initWithMac:(id)a0 rssi:(long long)a1 channel:(long long)a2 age:(double)a3 date:(id)a4;
- (id)outputToDictionary;
- (id)outputToFirstJSONDictionary;

@end
