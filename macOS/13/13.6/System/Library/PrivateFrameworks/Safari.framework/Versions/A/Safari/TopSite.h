@class NSString, NSURL, NSDictionary;

@interface TopSite : NSObject <FrequentlyVisitedSite>

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isBuiltIn) BOOL builtIn;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, nonatomic) BOOL hasStaticTitle;
@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
