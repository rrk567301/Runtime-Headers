@class NSString, KTLoggableData, NSDate;

@interface TransparencyCloudDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) KTLoggableData *loggableData;
@property (retain) NSString *state;
@property (retain) NSString *serialNumber;
@property (retain) NSDate *uploadedToCKAt;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
