@class NSSet;

@interface _CDPeopleSuggesterSettings : NSObject <NSCopying>

@property unsigned long long maxNumberOfPeopleSuggested;
@property (retain) NSSet *constrainMechanisms;
@property (retain) NSSet *constrainBundleIds;
@property (retain) NSSet *constrainAccounts;
@property (retain) NSSet *constrainDomainIdentifiers;
@property (retain) NSSet *constrainIdentifiers;
@property (retain) NSSet *constrainPersonIds;
@property (retain) NSSet *constrainPersonIdType;
@property unsigned long long constrainMaxRecipientCount;
@property char useFuture;
@property char aggregateByIdentifier;
@property char requireOutgoingInteraction;
@property char useTitleToContrainKeywords;
@property char inferActiveInteractions;
@property (retain) NSSet *ignoreContactIdentifiers;

+ (id)defaultSettings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
