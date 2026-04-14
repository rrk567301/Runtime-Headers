@class NSString, NSDictionary;

@interface AMSUIWebJSRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *logKey;
@property (retain) NSDictionary *options;
@property (readonly) NSString *service;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 logKey:(id)a1;

@end
