@class NSSet, NSMutableDictionary, NSString, NSDictionary;

@interface TIInputContextHistory : NSObject <NSCopying, NSSecureCoding> {
    struct set<NSHolder<TIInputContextEntry>, std::less<NSHolder<TIInputContextEntry>>, std::allocator<NSHolder<TIInputContextEntry>>> { struct __tree<NSHolder<TIInputContextEntry>, std::less<NSHolder<TIInputContextEntry>>, std::allocator<NSHolder<TIInputContextEntry>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _entries;
    struct set<NSHolder<TIInputContextEntry>, std::less<NSHolder<TIInputContextEntry>>, std::allocator<NSHolder<TIInputContextEntry>>> { struct __tree<NSHolder<TIInputContextEntry>, std::less<NSHolder<TIInputContextEntry>>, std::allocator<NSHolder<TIInputContextEntry>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } _pendingEntries;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _entriesLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *senderIdentifiers;
@property (readonly, nonatomic) NSSet *recipientIdentifiers;
@property (readonly, nonatomic) NSSet *recipientNames;
@property (readonly, nonatomic) NSSet *primaryRecipientIdentifiers;
@property (readonly, nonatomic) NSSet *secondaryRecipientIdentifiers;
@property (readonly, nonatomic) NSSet *firstPersonIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *participantsIDtoNamesMap;
@property (readonly, nonatomic) NSString *aggregateText;
@property (readonly, nonatomic) NSString *mostRecentNonSenderTextEntry;
@property (readonly, nonatomic) BOOL mostRecentTextEntryIsByMe;
@property (readonly, nonatomic) NSString *mostRecentTextEntryLogString;
@property (readonly, nonatomic) unsigned long long threadID;
@property (readonly, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *focusedEntryIdentifier;
@property (nonatomic) unsigned long long maxContextLength;
@property (retain, nonatomic) NSDictionary *infoDict;
@property (readonly, nonatomic) NSString *senderIdentifier;

+ (BOOL)isMail;
+ (unsigned long long)maxEntryLength;
+ (BOOL)nameComponentsAreEmpty:(id)a0;

- (id)debugDescription;
- (BOOL)hasPendingEntries;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addEntry:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addNewParticipantWithIdentifier:(id)a0 name:(id)a1;
- (void)addTextEntry:(id)a0 timestamp:(id)a1 senderIdentifier:(id)a2;
- (void)addTextEntry:(id)a0 timestamp:(id)a1 senderIdentifier:(id)a2 entryIdentifier:(id)a3;
- (void)assertCheckpointForCoding;
- (void)enumerateAllContextEntryObjects:(id /* block */)a0;
- (id)initWithRecipientIdentifiers:(id)a0;
- (id)initWithRecipientIdentifiers:(id)a0 senderIdentifiers:(id)a1;
- (id)initWithThreadIdentifier:(id)a0 participantsIDtoNamesMap:(id)a1 firstPersonIDs:(id)a2 primaryRecipients:(id)a3 secondaryRecipients:(id)a4 infoDict:(id)a5;
- (void)updateRecipientNames:(id)a0;
- (id)_addEntry:(id)a0;
- (id)senderIdentifier;
- (BOOL)validateForSmartReplyGeneration;
- (id)_addTextEntry:(id)a0 timestamp:(id)a1 senderIdentifier:(id)a2 entryIdentifier:(id)a3 primaryRecipientIdentifiers:(id)a4 secondaryRecipientIdentifiers:(id)a5;
- (void)_enumerateAllEntriesAsInputContextEntries:(id /* block */)a0;
- (void)_withLockPerformBlock:(id /* block */)a0;
- (void)_withLocksOnSelfAnd:(id)a0 performBlock:(id /* block */)a1;
- (void)addTextEntry:(id)a0 timestamp:(id)a1;
- (BOOL)allParticipantsKnown;
- (void)appendPendingEntriesFromInputContextHistory:(id)a0;
- (void)enumerateAllContextEntries:(id /* block */)a0;
- (void)enumerateAllContextEntriesWithEntryId:(id /* block */)a0;
- (void)enumerateAllEntries:(id /* block */)a0;
- (void)enumeratePendingEntries:(id /* block */)a0;
- (id)initWithRecipientIdentifiers:(id)a0 senderIdentifier:(id)a1;
- (id)initWithThreadID:(unsigned long long)a0 participantsIDtoNamesMap:(id)a1 firstPersonIDs:(id)a2 primaryRecipients:(id)a3 secondaryRecipients:(id)a4;
- (id)invalidReasonsForSmartReplyGeneration;
- (id)mostRecentTextEntries:(unsigned long long)a0;
- (id)mostRecentTextEntry;

@end
