@class NSString, NSDictionary;

@interface NDOAMSPropertiesRequestContext : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ serialNumber;
    void /* function */ universalLinkPath;
    void /* function */ additionalBody;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) unsigned long long requestType;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *universalLinkPath;
@property (nonatomic, readonly) NSDictionary *additionalBody;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequestType:(unsigned long long)a0 serialNumber:(id)a1 universalLinkPath:(id)a2 additionalBody:(id)a3;

@end
