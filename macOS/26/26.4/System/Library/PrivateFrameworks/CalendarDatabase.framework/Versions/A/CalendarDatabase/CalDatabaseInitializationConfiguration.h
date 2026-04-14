@class NSURL, CDBPreferences;
@protocol CalCalendarDataContainerProvider;

@interface CalDatabaseInitializationConfiguration : NSObject

@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSURL *directoryURL;
@property (retain, nonatomic) id<CalCalendarDataContainerProvider> dataContainerProvider;
@property (retain, nonatomic) CDBPreferences *preferences;

- (void).cxx_destruct;
- (id)initWithDirectoryURL:(id)a0;
- (id)description;
- (id)redactedDescription;

@end
