@class NSString;

@interface FACommunicationLimits : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ limitType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL strictPolicy;
@property (nonatomic, copy) NSString *limitType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)initWithEnabled:(BOOL)a0 strictPolicy:(BOOL)a1 limitType:(id)a2;

@end
