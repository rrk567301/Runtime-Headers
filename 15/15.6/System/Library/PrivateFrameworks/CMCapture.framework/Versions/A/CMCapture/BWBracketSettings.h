@class NSArray, NSDictionary;

@interface BWBracketSettings : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int bracketingMode;
@property (readonly, nonatomic) int bracketFrameCount;
@property (nonatomic) char providePreBracketedEV0;
@property (nonatomic) char lensStabilizationEnabledForClientBracket;
@property (copy, nonatomic) NSArray *exposureValues;
@property (copy, nonatomic) NSArray *manualExposureBracketedCaptureParams;
@property (copy, nonatomic) NSDictionary *oisBracketedCaptureParams;

+ (id)bracketSettingsForBracketingMode:(int)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
