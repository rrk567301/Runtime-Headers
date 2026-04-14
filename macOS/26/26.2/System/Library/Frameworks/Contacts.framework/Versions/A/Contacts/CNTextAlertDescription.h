@class NSString;

@interface CNTextAlertDescription : CNAbstractActivityAlertDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activity;
- (void)setCNValue:(id)a0 onContact:(id)a1;
- (id)coreDataKey;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)CNValueForContact:(id)a0;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (id)coreDataOwnedEntityName;
- (id)init;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;

@end
