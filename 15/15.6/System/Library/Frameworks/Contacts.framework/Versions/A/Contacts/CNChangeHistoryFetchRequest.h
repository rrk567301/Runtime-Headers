@class CNChangeHistoryAnchor, NSString, NSArray, NSData;

@interface CNChangeHistoryFetchRequest : CNFetchRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long resultType;
@property (readonly, nonatomic) CNChangeHistoryAnchor *startingAnchor;
@property (readonly, nonatomic, getter=shouldEnforceClientIdentifer) char enforceClientIdentifier;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (nonatomic) char includeChangeAnchors;
@property (nonatomic) char includeChangeIDs;
@property (nonatomic) char includeExternalIDs;
@property (nonatomic) char includeImagesChanged;
@property (nonatomic) char includeLabeledValueChanges;
@property (nonatomic) char includeLinkingChanges;
@property (nonatomic) char includeMeCardChanges;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (nonatomic) char unifyResults;
@property (copy, nonatomic) NSData *startingToken;
@property (copy, nonatomic) NSArray *additionalContactKeyDescriptors;
@property (nonatomic) char shouldUnifyResults;
@property (nonatomic) char mutableObjects;
@property (nonatomic) char includeGroupChanges;
@property (copy, nonatomic) NSArray *excludedTransactionAuthors;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithClientIdentifier:(id)a0;
- (void)acceptVisitor:(id)a0;
- (void)setStartingAnchor:(id)a0;

@end
