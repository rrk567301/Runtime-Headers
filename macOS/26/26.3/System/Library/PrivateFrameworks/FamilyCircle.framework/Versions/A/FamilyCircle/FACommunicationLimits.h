@class NSString;

@interface FACommunicationLimits : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ limitType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL strictPolicy;
@property (nonatomic, copy) NSString *limitType;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEnabled:(BOOL)a0 strictPolicy:(BOOL)a1 limitType:(id)a2;

@end
