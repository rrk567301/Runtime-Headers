@class NSData, NSString, NSDictionary;

@interface CUNANEndpoint : NSObject

@property (copy, nonatomic) NSData *customData;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int port;
@property (nonatomic) int rssi;
@property (copy, nonatomic) NSString *serviceType;
@property (readonly, copy, nonatomic) NSDictionary *textInfo;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;

@end
