@class NSArray, WFCommunicationMethod, WFContentAttributionSet;

@interface WFProcessedContacts : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *entries;
@property (readonly, nonatomic) WFContentAttributionSet *attributionSet;
@property (readonly, nonatomic) WFCommunicationMethod *communicationMethod;

- (id)initWithEntries:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)contentCollection;
- (id)initWithEntries:(id)a0 attributionSet:(id)a1 communicationMethod:(id)a2;

@end
