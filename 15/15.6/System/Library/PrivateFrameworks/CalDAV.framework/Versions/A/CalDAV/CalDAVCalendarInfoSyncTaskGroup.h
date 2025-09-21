@interface CalDAVCalendarInfoSyncTaskGroup : CoreDAVContainerInfoSyncTaskGroup

@property (nonatomic) char fetchSharees;

- (Class)containerItemClass;
- (id)copyContainerParserMappings;

@end
