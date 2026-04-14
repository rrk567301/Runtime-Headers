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

+ (id)os_log;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)a0;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)initWithPredicate:(id)a0;
- (id)shortDebugDescription;
- (id)cn_predicate;
- (void)mainStoreDidFetchContacts:(id)a0 unifiedFetch:(BOOL)a1;
- (id /* block */)cn_resultTransformWithMatchInfos:(id)a0;
- (void)cn_triageWithLog:(id)a0 serialNumber:(unsigned long long)a1;
- (id)contactsFromDonationStore:(id)a0;
- (void)_cn_acceptVisitor:(id)a0;

@end
