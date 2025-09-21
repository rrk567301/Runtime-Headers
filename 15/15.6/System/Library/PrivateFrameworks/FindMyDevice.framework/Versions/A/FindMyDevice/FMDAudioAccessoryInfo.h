@class NSString;

@interface FMDAudioAccessoryInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *systemSerialNumber;
@property (copy, nonatomic) NSString *leftSerialNumber;
@property (copy, nonatomic) NSString *rightSerialNumber;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSystemSerialNumber:(id)a0 leftSerialNumber:(id)a1 rightSerialNumber:(id)a2;

@end
