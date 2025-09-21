@class NSUUID, NSString, CSCoreSpeechServicesAccessoryInfo, NSNumber;

@interface CSVoiceTriggerRTModelRequestOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char allowMph;
@property (readonly, nonatomic) NSNumber *userSelectedPhraseType;
@property (readonly, nonatomic) NSUUID *endpointId;
@property (readonly, nonatomic) NSNumber *engineMajorVersion;
@property (readonly, nonatomic) NSNumber *engineMinorVersion;
@property (readonly, nonatomic) NSNumber *accessoryModelType;
@property (readonly, nonatomic) NSString *siriLocale;
@property (readonly, copy, nonatomic) CSCoreSpeechServicesAccessoryInfo *accessoryInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCSRTModelRequestOptions:(id)a0 builder:(id /* block */)a1;
- (id)initWithMutableBuilder:(id /* block */)a0;

@end
