@class NSString, NSDictionary;

@interface CRKToolCommandUserInfo : NSObject

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

- (void).cxx_destruct;
- (id)appVersion;
- (id)initWithSessionIdentifier:(id)a0;

@end
