@class NSDictionary;

@interface CTXPCFirmwareUpdateInfoResponse : CTXPCResponseMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *firmwareInfo;

- (id)ct_shortName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFimwareUpdateInfo:(id)a0;

@end
