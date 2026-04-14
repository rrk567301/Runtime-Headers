@class NSObject;

@interface ADTimeSyncNode : NSObject

@property (retain, nonatomic) NSObject *data;
@property (retain, nonatomic) NSObject *metadata;
@property double midExposureTimestamp;
@property double timestamp;
@property struct { void /* unknown type, empty encoding */ columns[4]; } pose;

- (void).cxx_destruct;

@end
