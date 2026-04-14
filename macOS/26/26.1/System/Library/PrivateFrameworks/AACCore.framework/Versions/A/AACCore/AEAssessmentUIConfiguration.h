@interface AEAssessmentUIConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=shouldPresentDisplayShields) BOOL presentDisplayShields;
@property (readonly, nonatomic, getter=shouldCaptureDisplays) BOOL captureDisplays;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithPresentDisplayShields:(BOOL)a0 captureDisplays:(BOOL)a1;

@end
