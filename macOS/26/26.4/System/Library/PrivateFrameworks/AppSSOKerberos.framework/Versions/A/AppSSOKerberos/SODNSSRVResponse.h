@class NSString;

@interface SODNSSRVResponse : NSObject

@property (retain, nonatomic) NSString *host;
@property (nonatomic) unsigned short port;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
