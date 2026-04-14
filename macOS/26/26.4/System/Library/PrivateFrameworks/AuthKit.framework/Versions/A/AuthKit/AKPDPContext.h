@class NSString, NSUUID;

@interface AKPDPContext : NSObject <AKAuthenticatedServerRequest, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *rawPassword;
@property (readonly, nonatomic) NSUUID *_identifier;
@property (copy, nonatomic) NSString *altDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithRawPassword:(id)a0 altDSID:(id)a1;

@end
