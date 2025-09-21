@class NSSet;

@interface CalDAVCalendarUserSearchTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSSet *searchStrings;
@property (nonatomic) long long searchType;
@property (nonatomic) unsigned long long resultLimit;
@property (nonatomic) char findAttendees;
@property (nonatomic) char findLocations;
@property char findUsers;
@property char findGroups;
@property char findResources;

+ (char)tokensAreLegal:(id)a0;

- (void).cxx_destruct;
- (id)searchItems;
- (id)requestBody;
- (id)extraAttributes;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithSearchStrings:(id)a0 atURL:(id)a1;

@end
