@class NSString;

@interface adm_DeactivationChangeRequest : adm_ConfigurationChangeRequest <adm_JSONSerializable, NSSecureCoding, dspd_DeactivationChangeRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int session;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSession:(unsigned int)a0;
- (struct basic_json<map, vector, std::string, bool, long long, unsigned long long, double, allocator, adl_serializer, std::vector<unsigned char>> { unsigned char x0; union json_value { void *x0; void *x1; void *x2; void *x3; BOOL x4; long long x5; unsigned long long x6; double x7; } x1; })adm_toJSON;

@end
