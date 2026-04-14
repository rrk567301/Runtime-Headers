@class NSArray;

@interface AFSetSettingsResponse : AFSiriResponse {
    NSArray *_settingChanges;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithRequest:(id)a0 settingChanges:(id)a1;
- (id)settingChanges;

@end
