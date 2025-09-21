@class NSArray;

@interface AFSetSettingsRequest : AFSiriRequest

@property (copy, nonatomic, setter=_setSettings:) NSArray *settings;
@property (nonatomic, setter=_setApplyChanges:) char applyChanges;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (id)createResponseWithSettingChanges:(id)a0;

@end
