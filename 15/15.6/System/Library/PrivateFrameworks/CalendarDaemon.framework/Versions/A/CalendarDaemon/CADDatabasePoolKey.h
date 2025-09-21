@class CADDatabaseInitializationOptions, NSURL;
@protocol CalCalendarDataContainerProvider;

@interface CADDatabasePoolKey : NSObject <NSCopying> {
    int _initOptions;
    NSURL *_databaseDirectory;
    id<CalCalendarDataContainerProvider> _calendarDataContainerProvider;
    char _unitTesting;
}

@property (readonly) CADDatabaseInitializationOptions *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInitializationOptions:(id)a0;

@end
