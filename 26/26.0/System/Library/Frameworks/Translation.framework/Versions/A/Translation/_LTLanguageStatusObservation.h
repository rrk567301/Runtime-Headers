@class NSLocale;

@interface _LTLanguageStatusObservation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) BOOL isIndeterminateProgress;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) unsigned long long downloadSize;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long rank;

- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocale:(id)a0 progress:(double)a1 downloadSize:(unsigned long long)a2 status:(long long)a3 rank:(long long)a4;

@end
