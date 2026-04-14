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

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestType:(unsigned long long)a0 serialNumber:(id)a1 universalLinkPath:(id)a2 additionalBody:(id)a3;

@end
