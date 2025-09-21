@class NSString;

@interface AUAudioUnitPreset : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property long long number;
@property (copy) NSString *name;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
