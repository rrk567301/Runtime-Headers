@class NSArray, _LTStreamingOutput;

@interface _LTStabilizationTranslationResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long generation;
@property (readonly, nonatomic) _LTStreamingOutput *output;
@property (readonly, nonatomic) NSArray *stableSegments;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOutput:(id)a0 stableSegments:(id)a1;

@end
