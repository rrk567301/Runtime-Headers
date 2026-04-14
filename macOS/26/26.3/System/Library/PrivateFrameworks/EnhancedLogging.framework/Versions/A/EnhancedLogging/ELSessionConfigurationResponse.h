@class NSDictionary;

@interface ELSessionConfigurationResponse : NSObject

@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSDictionary *data;

- (void).cxx_destruct;
- (id)initWithStatusCode:(long long)a0 data:(id)a1;

@end
