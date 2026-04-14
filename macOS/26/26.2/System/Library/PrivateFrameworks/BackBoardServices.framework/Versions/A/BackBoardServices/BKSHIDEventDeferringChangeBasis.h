@class NSString;
@protocol BKSHIDEventProvenance;

@interface BKSHIDEventDeferringChangeBasis : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<BKSHIDEventProvenance> eventProvenance;

+ (id)new;
+ (id)constraintBasis;
+ (id)ruleOriginatorBasis;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithEventProvenance:(id)a0;

@end
