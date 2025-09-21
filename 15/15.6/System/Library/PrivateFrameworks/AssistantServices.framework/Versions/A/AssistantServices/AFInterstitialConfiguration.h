@class NSString;

@interface AFInterstitialConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long style;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) long long gender;
@property (readonly, copy, nonatomic) NSString *recordRoute;
@property (readonly, nonatomic) char isVoiceTrigger;
@property (readonly, nonatomic) char isDucking;
@property (readonly, nonatomic) char isTwoShot;
@property (readonly, nonatomic) unsigned long long speechEndHostTime;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithStyle:(long long)a0 languageCode:(id)a1 gender:(long long)a2 recordRoute:(id)a3 isVoiceTrigger:(char)a4 isDucking:(char)a5 isTwoShot:(char)a6 speechEndHostTime:(unsigned long long)a7;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
