@class NSData, NSDictionary;

@interface PKWebServiceResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *rawData;
@property (readonly, nonatomic) id JSONObject;
@property (readonly, nonatomic) NSDictionary *headers;

+ (char)jsonDataOptional;
+ (id)responseWithData:(id)a0;
+ (id)responseWithData:(id)a0 headers:(id)a1;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithData:(id)a0 headers:(id)a1;

@end
