@class NSDictionary;

@interface PHASEExternalStreamGroupDebugInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isControlled) char controlled;
@property (readonly, nonatomic, getter=isControllerPaused) char controllerPaused;
@property (readonly, copy, nonatomic) NSDictionary *streams;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setStreams:(id)a0;
- (void)setControlled:(char)a0;
- (void)setControllerPaused:(char)a0;

@end
