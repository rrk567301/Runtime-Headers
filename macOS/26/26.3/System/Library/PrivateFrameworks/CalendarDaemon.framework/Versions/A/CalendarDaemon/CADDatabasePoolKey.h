@class CADDatabaseInitializationOptions, NSURL;
@protocol CalCalendarDataContainerProvider;

@interface CADDatabasePoolKey : NSObject <NSCopying> {
    int _initOptions;
    NSURL *_databaseDirectory;
    id<CalCalendarDataContainerProvider> _calendarDataContainerProvider;
    BOOL _unitTesting;
}

@property (readonly) CADDatabaseInitializationOptions *options;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithInitializationOptions:(id)a0;

@end
