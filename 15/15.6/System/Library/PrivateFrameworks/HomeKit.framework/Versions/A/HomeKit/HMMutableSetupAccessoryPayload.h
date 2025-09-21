@class NSString, NSURL, NSNumber, HMCHIPAccessorySetupPayload;

@interface HMMutableSetupAccessoryPayload : HMSetupAccessoryPayload

@property (copy, nonatomic) NSURL *setupPayloadURL;
@property (copy, nonatomic) NSString *setupID;
@property (copy, nonatomic) NSNumber *categoryNumber;
@property (copy, nonatomic) NSString *productNumber;
@property (nonatomic) char supportsIP;
@property (nonatomic) char supportsWAC;
@property (nonatomic) char supportsBTLE;
@property (nonatomic, getter=isPaired) char paired;
@property (copy, nonatomic) NSNumber *threadIdentifier;
@property (retain, nonatomic) HMCHIPAccessorySetupPayload *chipAccessorySetupPayload;

@end
