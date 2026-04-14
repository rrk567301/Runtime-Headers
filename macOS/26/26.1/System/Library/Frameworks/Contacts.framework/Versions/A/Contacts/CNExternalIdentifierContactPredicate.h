@class NSString, NSArray;

@interface CNExternalIdentifierContactPredicate : CNPredicate <CNCDContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *externalIdentifiers;

+ (BOOL)supportsSecureCoding;

- (id)cn_coreDataPredicate;
- (id)initWithExternalIdentifiers:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_inputsAreValid;

@end
