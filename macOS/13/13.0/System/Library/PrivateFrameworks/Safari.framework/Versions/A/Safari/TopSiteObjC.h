@class NSString, NSURL, NSDictionary;

@interface TopSiteObjC : NSObject <FrequentlyVisitedSite>

@property (readonly, nonatomic) void *cpp;
@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL isBuiltIn;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ban;

@end
