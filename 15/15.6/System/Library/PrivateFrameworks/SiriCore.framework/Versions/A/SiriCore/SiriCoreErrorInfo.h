@class NSError;

@interface SiriCoreErrorInfo : NSObject

@property (retain, nonatomic) NSError *error;
@property (nonatomic) char isPeerConnectionError;
@property (nonatomic) char isPeerNotNearbyError;

- (void).cxx_destruct;

@end
