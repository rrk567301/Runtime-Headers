@class NSLocale;

@interface _LTLanguageStatusObservation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) char isIndeterminateProgress;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) long long status;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocale:(id)a0 progress:(double)a1 status:(long long)a2;

@end
