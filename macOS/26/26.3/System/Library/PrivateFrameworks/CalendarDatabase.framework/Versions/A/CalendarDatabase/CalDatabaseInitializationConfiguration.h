@class NSURL, CDBPreferences;
@protocol CalCalendarDataContainerProvider;

@interface CalDatabaseInitializationConfiguration : NSObject

@property (nonatomic) int options;
@property (retain, nonatomic) NSURL *directoryURL;
@property (retain, nonatomic) id<CalCalendarDataContainerProvider> dataContainerProvider;
@property (retain, nonatomic) CDBPreferences *preferences;

- (id)initWithDirectoryURL:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
