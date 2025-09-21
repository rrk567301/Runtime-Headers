@class NSString, NSNumber, CEMAnyPayload;

@interface CEMCommandBase : CEMPayloadBase

@property (copy, nonatomic) NSString *commandType;
@property (copy, nonatomic) NSString *commandIdentifier;
@property (copy, nonatomic) NSString *commandDescription;
@property (copy, nonatomic) NSNumber *commandRequiresNetworkTether;
@property (copy, nonatomic) CEMAnyPayload *commandPayload;

+ (id)commandForData:(id)a0 error:(id *)a1;
+ (id)commandForPayload:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)serializeAsDataWithError:(id *)a0;
- (int)executionLevel;
- (char)loadCommandFromDictionary:(id)a0 error:(id *)a1;
- (char)mustBeSupervised;

@end
