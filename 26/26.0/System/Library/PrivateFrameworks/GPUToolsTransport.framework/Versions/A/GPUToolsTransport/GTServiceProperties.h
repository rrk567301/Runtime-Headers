@class NSString, NSArray;

@interface GTServiceProperties : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *protocolName;
@property (copy, nonatomic) NSArray *protocolMethods;
@property (copy, nonatomic) NSString *deviceUDID;
@property (nonatomic) unsigned long long servicePort;
@property (nonatomic) int platform;
@property (nonatomic) unsigned long long version;

+ (id)protocolMethods:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithProtocol:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
