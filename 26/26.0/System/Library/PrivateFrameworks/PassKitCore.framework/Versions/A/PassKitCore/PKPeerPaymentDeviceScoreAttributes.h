@class NSString, NSArray;

@interface PKPeerPaymentDeviceScoreAttributes : NSObject

@property (nonatomic) unsigned long long payloadVersion;
@property (nonatomic) unsigned long long endpoint;
@property (copy, nonatomic) NSString *recipientAddress;
@property (copy, nonatomic) NSArray *recipientAddresses;
@property (nonatomic) unsigned long long quoteRequestDestination;
@property (nonatomic) unsigned long long messagesContext;

- (id)description;
- (id)key;
- (void).cxx_destruct;

@end
