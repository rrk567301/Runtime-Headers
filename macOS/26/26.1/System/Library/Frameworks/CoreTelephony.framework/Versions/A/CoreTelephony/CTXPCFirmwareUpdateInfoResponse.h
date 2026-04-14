@class NSDictionary;

@interface CTXPCFirmwareUpdateInfoResponse : CTXPCResponseMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *firmwareInfo;

- (id)ct_shortName;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFimwareUpdateInfo:(id)a0;

@end
