@class NSUUID, NSString;

@interface LNConnectionAction : NSObject <BSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long metadataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)sendToPid:(id)a0 bundleIdentifier:(id)a1;
- (id)sendToPid:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (id)initWithIdentifier:(id)a0 metadataVersion:(long long)a1;

@end
