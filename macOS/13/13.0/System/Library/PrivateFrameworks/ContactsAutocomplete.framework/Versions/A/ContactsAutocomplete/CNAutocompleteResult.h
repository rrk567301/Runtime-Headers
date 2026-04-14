@class _PSSuggestion, NSString, NSArray, CNAutocompleteNameComponents, CNAutocompleteResultValue, NSDictionary, NSNumber;

@interface CNAutocompleteResult : NSObject {
    BOOL _hasPrefixMatch;
    NSString *_descriptionMemo;
}

@property (readonly, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *groupIdentifier;
@property (readonly, copy) id address;
@property (readonly) long long addressType;
@property (readonly, copy) NSArray *userInfos;
@property BOOL hasPreferredDomain;
@property unsigned long long sourceType;
@property long long resultType;
@property (copy) NSString *displayName;
@property (copy) NSString *identifier;
@property (retain) CNAutocompleteResultValue *value;
@property (copy) CNAutocompleteNameComponents *nameComponents;
@property (copy) NSDictionary *userInfo;
@property (copy) NSString *lastSendingAddress;
@property (copy, nonatomic) id /* block */ contactProvider;
@property (copy, nonatomic) id /* block */ membersProvider;
@property (copy, nonatomic) NSArray *diagnosticLogs;
@property (retain, nonatomic) NSNumber *recentsIdentifier;
@property (copy, nonatomic) id /* block */ ignoreResultBlock;
@property (retain) _PSSuggestion *psSuggestion;

+ (unsigned long long)category;
+ (id)calDAVResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2 resultType:(long long)a3 groupMembersProvider:(id /* block */)a4 userInfo:(id)a5;
+ (id)comparators;
+ (id)resultWithDisplayName:(id)a0;
+ (id)localeForHashing;
+ (id)contactResultWithDisplayName:(id)a0 value:(id)a1 nameComponents:(id)a2 identifier:(id)a3;
+ (id)groupResultWithDisplayName:(id)a0 identifier:(id)a1;
+ (id)contactStoreForFetchingFullContacts;
+ (BOOL)isSourceTypeConsideredSuggestion:(unsigned long long)a0;
+ (id)messagesResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2 resultType:(long long)a3 addressType:(long long)a4 identifier:(id)a5 contactProvider:(id /* block */)a6 groupMembersProvider:(id /* block */)a7 userInfo:(id)a8;
+ (id)calDAVResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2;
+ (id)calDAVResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2 resultType:(long long)a3 groupMembersProvider:(id /* block */)a4;
+ (id)messagesResultWithAddress:(id)a0 displayName:(id)a1 nameComponents:(id)a2 resultType:(long long)a3 groupMembersProvider:(id /* block */)a4 userInfo:(id)a5;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (void)addDiagnosticLog:(id /* block */)a0;
- (id)stringForHashing;
- (long long)compare:(id)a0 withPriorityComparator:(id /* block */)a1;
- (id)resultTypeDescription;
- (id)sourceTypeDescription;
- (void)updateUsingInformationFromRelatedResult:(id)a0;
- (BOOL)shouldUseGroupNamingForSource;
- (BOOL)shouldUseGroupNamingForResult;
- (id)members:(id *)a0;
- (id)expandMembers;
- (id)contactWithKeysToFetch:(id)a0 error:(id *)a1;
- (void)addDiagnosticLogFuture:(id)a0;
- (id)diagnosticLog;

@end
