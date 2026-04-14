@class NSString;

@interface PODShowSettings : NSObject <PODShowSettingsProtocol, PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long playOrder;
@property (readonly, nonatomic) long long sortOrder;
@property (readonly, nonatomic) long long downloadAction;
@property (readonly, nonatomic) long long limitRule;
@property (readonly, nonatomic) long long removePlayedRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initUsingPropertiesFrom:(id)a0;

@end
