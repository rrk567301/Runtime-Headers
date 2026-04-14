@class NSString, NSArray;

@interface CNExternalUUIDContactPredicate : CNPredicate <CNCDContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *externalUUIDs;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)shortDebugDescription;
- (id)initWithCoder:(id)a0;
- (id)cn_coreDataPredicate;
- (BOOL)_inputsAreValid;
- (id)initWithExternalUUIDs:(id)a0;

@end
