@class NSString, NSArray;

@interface CNHandleStringsContactPredicate : CNPredicate <CNCDContainerScopedContactPredicate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *handleStrings;
@property (readonly, copy, nonatomic) NSArray *containerIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (id)subpredicatesWithClassification:(id)a0;
+ (id)emailAddressSubpredicateWithHandles:(id)a0;
+ (id)phoneNumberSubpredicateWithHandles:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)shortDebugDescription;
- (id)cn_coreDataPredicate;
- (id /* block */)cn_resultTransformWithMatchInfos:(id)a0;
- (void)cn_triageWithLog:(id)a0 serialNumber:(unsigned long long)a1;
- (id)cn_coreDataExchangePredicate;
- (id)initWithHandleStrings:(id)a0;
- (id)initWithHandleStrings:(id)a0 containerIdentifiers:(id)a1;

@end
