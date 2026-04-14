@class NSString, NSArray, NSUUID;

@interface GTServiceProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *protocolName;
@property (readonly, nonatomic) NSArray *protocolMethods;
@property (copy, nonatomic) NSUUID *deviceUUID;
@property (nonatomic) unsigned long long servicePort;

+ (id)protocolMethods:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtcol:(id)a0;

@end
