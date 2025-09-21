@class NSString, NSMutableArray;

@interface MPSectionedIdentifierListItemEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationItem>

@property (readonly, nonatomic) NSString *itemIdentifier;
@property (weak, nonatomic) MPSectionedIdentifierListItemEntry *rootEntry;
@property (readonly, nonatomic) MPSectionedIdentifierListItemEntry *latestUserClone;
@property (readonly, nonatomic) MPSectionedIdentifierListItemEntry *latestDataSourceClone;
@property (readonly, nonatomic) char hasClones;
@property (retain, nonatomic) NSMutableArray *clonedEntries;
@property (readonly, nonatomic, getter=isRemoved) char removed;
@property (readonly, nonatomic) struct { char x0; char x1; char x2; char x3; char x4; char x5; char x6; char x7; long long x8; } state;
@property (readonly, nonatomic, getter=isDataSourceCloned) char dataSourceCloned;
@property (readonly, nonatomic, getter=isDataSourceMoved) char dataSourceMoved;
@property (readonly, nonatomic, getter=isUserRemoved) char userRemoved;
@property (readonly, nonatomic, getter=isUserMoved) char userMoved;
@property (readonly, nonatomic, getter=isUserCloned) char userCloned;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) long long branchDepth;
@property (readonly, nonatomic) long long entryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (id)itemEntryWithSectionIdentifier:(id)a0 itemIdentifier:(id)a1 generationPrefix:(id)a2;
+ (id)itemEntryWithSectionIdentifier:(id)a0 itemIdentifier:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringRepresentation;
- (id)_stateDumpObject;
- (long long)_generationNumber;
- (char)isDataSourceRemoved;
- (id)newClonedEntry;
- (void)prepareForDealloc;
- (void)setDataSourceCloned;
- (void)setDataSourceMoved;
- (void)setDataSourceRemoved;
- (void)setUserCloned;
- (void)setUserMoved;
- (void)setUserRemoved;

@end
