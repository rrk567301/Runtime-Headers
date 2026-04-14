@class NSDictionary, NSString, NSNumber;

@interface EWSSRVRecord : NSObject

@property (readonly, copy, nonatomic) NSDictionary *srvRecord;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, nonatomic) NSNumber *port;
@property (readonly, nonatomic) NSNumber *priority;
@property (readonly, nonatomic) NSNumber *weight;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSRVRecord:(id)a0;

@end
