@class NSSet;

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSSet *searchStrings;
@property (nonatomic) long long searchType;
@property (nonatomic) unsigned long long resultLimit;
@property (nonatomic) BOOL findAttendees;
@property (nonatomic) BOOL findLocations;
@property BOOL findUsers;
@property BOOL findGroups;
@property BOOL findResources;

+ (BOOL)tokensAreLegal:(id)a0;

- (void).cxx_destruct;
- (id)searchItems;
- (id)extraAttributes;
- (id)httpMethod;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithSearchStrings:(id)a0 atURL:(id)a1;

@end
