@class NSString, NSNumber;

@interface TCTextCompositionGradedPreference : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *preferenceString;
@property (readonly) long long maxGrade;
@property (readonly) long long minGrade;
@property (readonly, copy) NSNumber *chosenGrade;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPrefenceString:(id)a0 maxGrade:(long long)a1 minGrade:(long long)a2 chosenGrade:(id)a3;

@end
