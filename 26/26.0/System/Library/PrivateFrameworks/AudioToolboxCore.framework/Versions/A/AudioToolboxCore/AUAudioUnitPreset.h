@class NSString;

@interface AUAudioUnitPreset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long number;
@property (copy) NSString *name;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
