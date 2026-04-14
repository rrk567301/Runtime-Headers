@class NSString, NSArray, NSPredicate;

@interface CNPredicate : NSPredicate <CNDonatedContactsPredicate, NSCopying> {
    NSPredicate *_cn_predicate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *mainStoreContactIdentifiers;
@property (nonatomic) BOOL augmentMainStoreResults;
@property (readonly, nonatomic) BOOL cn_hasHighSpecificity;

+ (BOOL)supportsSecureCoding;
+ (id)os_log;

- (id)contactsFromDonationStore:(id)a0;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)shortDebugDescription;
- (BOOL)evaluateWithObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPredicate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)cn_predicate;
- (void)_cn_acceptVisitor:(id)a0;
- (id /* block */)cn_resultTransformWithMatchInfos:(id)a0;
- (void)cn_triageWithLog:(id)a0 serialNumber:(unsigned long long)a1;
- (void)mainStoreDidFetchContacts:(id)a0 unifiedFetch:(BOOL)a1;

@end
