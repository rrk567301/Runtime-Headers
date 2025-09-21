@class NSString, NSArray;

@interface EMContentRequestOptions : NSObject <NSSecureCoding, NSCopying, EMContentRequestOptionsBuilder>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *requestedRepresentation;
@property (nonatomic) long long networkUsage;
@property (nonatomic) long long includeSuggestionItems;
@property (copy, nonatomic) NSArray *requestedHeaderKeys;
@property (nonatomic) BOOL includeCachedMetadataJSON;
@property (nonatomic) BOOL requestAllHeaders;
@property (nonatomic) unsigned long long maximumNumberOfOriginalContentMessagesToRequest;
@property (nonatomic) long long cacheBehavior;
@property (nonatomic) long long urlBehavior;

+ (id)optionsWithRequestedRepresentationType:(id)a0 networkUsage:(long long)a1;
+ (id)optionsWithRequestedRepresentationType:(id)a0 networkUsage:(long long)a1 includeSuggestions:(long long)a2;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithBuilder:(id /* block */)a0;

@end
