@interface FACommunicationSafety : NSObject <NSSecureCoding, NSCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL strictPolicy;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)initWithEnabled:(BOOL)a0 strictPolicy:(BOOL)a1;

@end
