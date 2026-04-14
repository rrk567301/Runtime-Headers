@class NSUUID, NSDate;

@interface DeviceSelectionActivation : NSObject

@property (nonatomic, readonly) NSUUID *_deviceSelectionSessionId;
@property (nonatomic, readonly) NSUUID *deviceSelectionSessionId;
@property (nonatomic, readonly) NSDate *_timestamp;
@property (nonatomic, readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTimestamp:(id)a0 deviceSelectionSessionId:(id)a1;

@end
