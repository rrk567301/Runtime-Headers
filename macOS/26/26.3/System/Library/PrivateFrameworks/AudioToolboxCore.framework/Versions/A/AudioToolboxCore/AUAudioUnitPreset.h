@class NSString;

@interface AUAudioUnitPreset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long number;
@property (copy) NSString *name;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;

@end
