@class NSArray;

@interface _SFLanguageDetectorOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *languageConstraints;
@property (readonly, nonatomic) long long alternativesCount;
@property (readonly, nonatomic) long long resultReportingFrequency;
@property (readonly, nonatomic) BOOL useVAD;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLanguageConstraints:(id)a0 alternativesCount:(long long)a1 resultReportingFrequency:(long long)a2 useVAD:(BOOL)a3;

@end
