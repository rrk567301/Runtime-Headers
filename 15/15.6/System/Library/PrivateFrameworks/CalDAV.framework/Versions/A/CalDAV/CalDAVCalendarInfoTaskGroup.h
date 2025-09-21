@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup

@property (nonatomic) char fetchSharees;

- (id)_copyContainerParserMappings;
- (id)_copyContainerWithURL:(id)a0 andProperties:(id)a1;
- (id)containerForURL:(id)a0;
- (id)initWithAccountInfoProvider:(id)a0 containerURLs:(id)a1 taskManager:(id)a2;

@end
