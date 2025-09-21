@class CPLLibraryInfo, CPLAccountFlags, NSString, NSDate, CPLEngineScope, CPLScopedIdentifier, CPLLibraryState, CPLShare;

@interface CPLScopeChange : CPLRecordChange <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long scopeType;
@property (retain, nonatomic) CPLLibraryState *libraryState;
@property (retain, nonatomic) CPLLibraryInfo *libraryInfo;
@property (nonatomic) long long busyState;
@property (copy, nonatomic) NSString *stagingScopeIdentifier;
@property (nonatomic) unsigned long long pullTaskItem;
@property (retain, nonatomic) CPLEngineScope *scope;
@property (copy, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *recordModificationDate;
@property (readonly, nonatomic, getter=isDisabled) char disabled;
@property (readonly, nonatomic) NSDate *disabledDate;
@property (readonly, nonatomic) NSDate *deleteDate;
@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (readonly, nonatomic) char containerHasBeenWiped;
@property (retain, nonatomic) CPLShare *share;
@property (nonatomic, getter=isActivated) char activated;
@property (copy, nonatomic) NSString *title;

+ (id)descriptionForScopeType:(long long)a0;
+ (id)newDeleteScopeChangeWithScopeIdentifier:(id)a0 type:(long long)a1;
+ (id)newScopeChangeWithScopeIdentifier:(id)a0 type:(long long)a1;
+ (char)cplShouldIgnorePropertyForEquality:(id)a0;
+ (id)descriptionForBusyState:(long long)a0;
+ (id)mappingForScopeBusyStateDescription;
+ (id)mappingForScopeTypeDescription;
+ (id)newScopeChangeInferClassWithScopeIdentifier:(id)a0 type:(long long)a1;
+ (id)newScopeChangeWithAutomaticScopeIdentifierForScopeType:(long long)a0;
+ (Class)scopeChangeClassForType:(long long)a0;
+ (char)scopeWithTypeHasQuota:(long long)a0;
+ (char)shouldAutoActivateScopeWithType:(long long)a0;
+ (char)supportsDirectMinglingForScopeWithType:(long long)a0;
+ (char)supportsStagingScopeForScopeWithType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)scopeIdentifier;
- (id)assetCountPerType;
- (void)_setChangeType:(unsigned long long)a0;
- (id)_additionalDescription;
- (id)_scopedIdentifier;
- (long long)defaultFlags;
- (id)initWithScopeIdentifier:(id)a0 type:(long long)a1;
- (char)isLibraryShare;
- (char)isScopeChange;
- (char)needsToSetScopeIdentifier;
- (char)shouldAlwaysUpdateScopeInfoWhenPossible;
- (void)updateScopeFromScopeChange:(id)a0 direction:(unsigned long long)a1 didHaveChanges:(char *)a2;
- (void)updateScopeIdentifier:(id)a0;

@end
