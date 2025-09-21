@interface AEAssessmentUIConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=shouldPresentDisplayShields) char presentDisplayShields;
@property (readonly, nonatomic, getter=shouldCaptureDisplays) char captureDisplays;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPresentDisplayShields:(char)a0 captureDisplays:(char)a1;

@end
