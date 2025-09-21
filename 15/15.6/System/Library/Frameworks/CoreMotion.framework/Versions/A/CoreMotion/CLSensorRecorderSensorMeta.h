@interface CLSensorRecorderSensorMeta : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property unsigned long long identifier;
@property double startTime;
@property unsigned long long timestamp;
@property unsigned long long dataIdentifier;
@property unsigned int offset;
@property unsigned int dataSize;
@property int dataType;
@property char movement;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataType:(int)a0;

@end
