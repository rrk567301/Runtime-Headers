@class NSArray, NSString;

@interface IMMergedDomainIdentifiers : NSObject {
    void /* unknown type, empty encoding */ mergedDomainIdentifiers;
}

@property (nonatomic, readonly) NSArray *allChatGUIDs;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *allIdentifiers;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)allDomainsForChatGUID:(id)a0;
- (id)domainIdentifiersForChatGUID:(id)a0;
- (id)identifiersForChatGUID:(id)a0 domain:(id)a1;
- (id)initWithDomainIdentifiers:(id)a0 chatGUID:(id)a1;
- (id)initWithMergedDomainIdentifiers:(id)a0;
- (id)mergedDomainIdentifiersWithLatestChatGUID:(id)a0;
- (void)setDomainIdentifiers:(id)a0 forChatGUID:(id)a1;

@end
