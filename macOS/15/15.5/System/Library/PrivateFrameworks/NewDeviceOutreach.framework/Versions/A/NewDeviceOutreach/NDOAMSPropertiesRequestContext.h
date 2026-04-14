@class NSString, NSDictionary;

@interface NDOAMSPropertiesRequestContext : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ serialNumber;
    void /* unknown type, empty encoding */ universalLinkPath;
    void /* unknown type, empty encoding */ additionalBody;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ requestType;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *universalLinkPath;
@property (nonatomic, readonly) NSDictionary *additionalBody;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestType:(unsigned long long)a0 serialNumber:(id)a1 universalLinkPath:(id)a2 additionalBody:(id)a3;

@end
