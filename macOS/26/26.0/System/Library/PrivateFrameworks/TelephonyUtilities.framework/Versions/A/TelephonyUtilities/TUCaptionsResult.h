@class NSArray, NSString;

@interface TUCaptionsResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL utteranceComplete;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned int utteranceNumber;
@property (readonly, nonatomic) unsigned int updateNumber;
@property (readonly, nonatomic) double utteranceStartTimestamp;
@property (readonly, nonatomic) double utteranceDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAVCCaptionsResult:(id)a0;
- (id)initWithText:(id)a0 utteranceComplete:(BOOL)a1 tokens:(id)a2 utteranceNumber:(unsigned int)a3 updateNumber:(unsigned int)a4 utteranceStartTimestamp:(double)a5 utteranceDuration:(double)a6;
- (BOOL)isEqualToCaptionsResult:(id)a0;

@end
