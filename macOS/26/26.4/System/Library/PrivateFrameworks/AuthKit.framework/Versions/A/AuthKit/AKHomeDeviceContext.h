@class NSUUID, NSString, NSDictionary;

@interface AKHomeDeviceContext : NSObject <AKAuthenticatedServerRequest, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *_identifier;
@property (readonly, copy, nonatomic) NSString *operation;
@property (readonly, copy, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSString *altDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextForRemovalWithAltDSID:(id)a0 hkdIDs:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAltDSID:(id)a0 operation:(id)a1 parameters:(id)a2;

@end
