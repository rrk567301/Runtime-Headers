@class NSString;

@interface CLSProgressReportingCapability : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long kind;
@property (copy, nonatomic) NSString *details;

+ (char)supportsSecureCoding;
+ (id)relations;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (char)validateObject:(id *)a0;
- (id)initWithKind:(long long)a0 details:(id)a1;
- (void)mergeWithObject:(id)a0;

@end
