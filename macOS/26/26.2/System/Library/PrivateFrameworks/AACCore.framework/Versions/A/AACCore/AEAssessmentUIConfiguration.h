@interface AEAssessmentUIConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=shouldPresentDisplayShields) BOOL presentDisplayShields;
@property (readonly, nonatomic, getter=shouldCaptureDisplays) BOOL captureDisplays;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithPresentDisplayShields:(BOOL)a0 captureDisplays:(BOOL)a1;

@end
