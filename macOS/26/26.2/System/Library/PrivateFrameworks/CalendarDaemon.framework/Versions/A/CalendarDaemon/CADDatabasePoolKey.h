@class CADDatabaseInitializationOptions, NSURL;
@protocol CalCalendarDataContainerProvider;

@interface CADDatabasePoolKey : NSObject <NSCopying> {
    int _initOptions;
    NSURL *_databaseDirectory;
    id<CalCalendarDataContainerProvider> _calendarDataContainerProvider;
    BOOL _unitTesting;
}

@property (readonly) CADDatabaseInitializationOptions *options;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInitializationOptions:(id)a0;

@end
