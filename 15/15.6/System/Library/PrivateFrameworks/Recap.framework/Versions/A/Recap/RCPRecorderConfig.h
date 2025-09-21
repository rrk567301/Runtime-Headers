@class NSArray;

@interface RCPRecorderConfig : NSObject

@property (retain, nonatomic) NSArray *deviceUsagePageArray;
@property (nonatomic) double maxStreamDuration;
@property (nonatomic) char ignoreSenderProperties;

- (void).cxx_destruct;

@end
