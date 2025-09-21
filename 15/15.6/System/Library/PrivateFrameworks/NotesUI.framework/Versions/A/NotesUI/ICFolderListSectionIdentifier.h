@class NSArray, NSString, NSManagedObjectID;
@protocol ICItemIdentifier;

@interface ICFolderListSectionIdentifier : NSObject <ICSectionIdentifier>

@property (class, readonly, nonatomic) ICFolderListSectionIdentifier *systemSectionIdentifier;
@property (class, readonly, nonatomic) ICFolderListSectionIdentifier *tagSectionIdentifier;
@property (class, readonly, copy, nonatomic) NSArray *sortDescriptors;

@property (retain, nonatomic) NSManagedObjectID *accountObjectID;
@property (nonatomic) long long sectionType;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasHeader;
@property (readonly, nonatomic, getter=isCollapsible) char collapsible;
@property (readonly, copy, nonatomic) NSString *expansionStateContext;
@property (readonly, nonatomic) id<ICItemIdentifier> parentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithSectionType:(long long)a0;
- (long long)accountSectionTypeForLegacyAccount:(id)a0;
- (long long)accountSectionTypeForModernAccount:(id)a0;
- (char)isEqualToICFolderListSectionIdentifier:(id)a0;

@end
