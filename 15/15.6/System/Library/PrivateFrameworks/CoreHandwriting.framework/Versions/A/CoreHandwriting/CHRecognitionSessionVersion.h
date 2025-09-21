@interface CHRecognitionSessionVersion : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long sessionVersion;
@property (readonly, nonatomic) long long sessionResultVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionVersion:(long long)a0 sessionResultVersion:(long long)a1;
- (char)isValidSessionResultVersion;
- (char)isValidSessionVersion;

@end
