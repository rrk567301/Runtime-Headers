@class NSString;

@interface IOCEventCachedStreamUpdateEvent : NSObject <NSIOCEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *inputDeviceUID;
@property (retain, nonatomic) NSString *outputDeviceUID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInputDeviceUID:(id)a0 outputDeviceUID:(id)a1;

@end
