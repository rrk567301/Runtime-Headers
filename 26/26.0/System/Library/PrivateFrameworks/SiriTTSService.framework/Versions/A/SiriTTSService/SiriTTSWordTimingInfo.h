@class NSString;

@interface SiriTTSWordTimingInfo : NSObject <NSSecureCoding>

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic) double startTime;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } textRange;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartTiming:(double)a0 textRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
