@interface _GCHapticEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) long long type;
@property (nonatomic) double startTime;
@property (nonatomic) double intensity;
@property (nonatomic) double sharpness;
@property (nonatomic) char stopped;
@property (nonatomic) char transientBeganAsContinuousEvent;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct pair<bool, float> { BOOL x0; float x1; })valueForNoteParam:(unsigned int)a0 inParameters:(id)a1;
- (void)evaluateDeviceNoteParams:(id)a0;
- (id)initWithSyntheticCommand:(id)a0;

@end
