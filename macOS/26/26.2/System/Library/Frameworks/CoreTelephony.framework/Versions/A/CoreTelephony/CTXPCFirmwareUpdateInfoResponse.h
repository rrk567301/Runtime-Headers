@class NSDictionary;

@interface CTXPCFirmwareUpdateInfoResponse : CTXPCResponseMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *firmwareInfo;

- (id)ct_shortName;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFimwareUpdateInfo:(id)a0;

@end
