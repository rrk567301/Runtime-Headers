@class NSString, NSNumber;

@interface TUCaption : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double confidence;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) NSNumber *utteranceStartTimestamp;
@property (readonly, nonatomic) NSNumber *utteranceDuration;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;
+ (double)averageConfidenceOverCaptions:(id)a0;
+ (id)combinedStringFromCaptions:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)archivedDataWithError:(id *)a0;
- (id)initWithCaption:(id)a0;
- (id)initWithCaptionsToken:(id)a0;
- (id)initWithCaptionsToken:(id)a0 utteranceStartTimestamp:(id)a1 utteranceDuration:(id)a2;
- (id)initWithConfidence:(double)a0 text:(id)a1;
- (id)initWithConfidence:(double)a0 text:(id)a1 utteranceStartTimestamp:(id)a2 utteranceDuration:(id)a3;
- (id)initWithText:(id)a0 confidence:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)isEqualToCaption:(id)a0;

@end
