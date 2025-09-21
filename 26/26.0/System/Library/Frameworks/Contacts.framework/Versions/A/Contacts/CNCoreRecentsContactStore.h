@class NSString;

@interface CNCoreRecentsContactStore : CNDataMapperContactStore

@property (class, readonly) NSString *acceptedContactsAccountIdentifier;
@property (class, readonly) NSString *acceptedContactsDomainIdentifier;

+ (id)storeIdentifier;
+ (id)coreRecentsDomainFromContactIdentifier:(id)a0;
+ (id)coreRecentsDomainFromInternalIdentifier:(id)a0;
+ (id)coreRecentsIdentifierFromInternalIdentifier:(id)a0;
+ (id)internalIdentifierForDomain:(id)a0 recentsIdentifier:(id)a1;

- (id)initWithConfiguration:(id)a0 domains:(id)a1;

@end
