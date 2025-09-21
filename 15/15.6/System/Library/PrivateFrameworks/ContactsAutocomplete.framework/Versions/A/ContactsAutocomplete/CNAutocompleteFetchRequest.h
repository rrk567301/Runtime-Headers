@class NSArray, NSString, CNAutocompleteFetchContext, NSNumber;

@interface CNAutocompleteFetchRequest : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_shouldIncludeGroupResultsImpl;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, getter=isZeroKeywordSearch) char zeroKeywordSearch;
@property (readonly) NSArray *searchableProperties;
@property (readonly) NSString *triageIdentifier;
@property (copy) NSString *searchString;
@property (copy) NSArray *searchNames;
@property (copy) NSString *priorityDomainForSorting;
@property unsigned long long searchType;
@property (copy) CNAutocompleteFetchContext *fetchContext;
@property unsigned long long maximumResultsCount;
@property char includeContacts;
@property char includeRecents;
@property char includeSuggestions;
@property char includeLocalExtensions;
@property char includeDirectoryServers;
@property char includeCalendarServers;
@property char includePredictions;
@property char shouldIncludeGroupResults;
@property long long addressableGroupResultStyle;
@property (copy) NSString *sendingAddress;
@property char includeServers;

+ (id)request;
+ (id)makeTriageIdentifier;
+ (id)searchablePropertiesForSearchType:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isValid:(id *)a0;
- (id)executeWithDelegate:(id)a0;
- (id)includeDebugString;
- (id)searchTypeDebugString;
- (id)shouldIncludeGroupResultsDebugString;

@end
