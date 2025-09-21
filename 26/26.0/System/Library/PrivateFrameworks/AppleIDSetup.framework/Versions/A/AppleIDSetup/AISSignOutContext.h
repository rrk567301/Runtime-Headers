@class NSString, NSDictionary;

@interface AISSignOutContext : NSObject <NSSecureCoding> {
    void /* function */ accountAltDSIDsByService;
    void /* function */ machineIdToSignOut;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDictionary *accountAltDSIDsByService;
@property (nonatomic, readonly) BOOL shouldRemoveDeviceUser;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *machineIdToSignOut;
@property (nonatomic, readonly) long long type;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWith:(id)a0 type:(long long)a1;
- (id)initWithAccountAltDSIDsByService:(id)a0;
- (id)initWithAltDSID:(id)a0 machineIdToSignOut:(id)a1 type:(long long)a2;
- (id)initWithAltDSID:(id)a0 type:(long long)a1;

@end
