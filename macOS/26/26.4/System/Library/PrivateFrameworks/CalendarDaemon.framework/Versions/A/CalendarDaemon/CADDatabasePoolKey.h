@class CADDatabaseInitializationOptions, NSURL;
@protocol CalCalendarDataContainerProvider;

@interface CADDatabasePoolKey : NSObject <NSCopying> {
    unsigned long long _initOptions;
    NSURL *_databaseDirectory;
    id<CalCalendarDataContainerProvider> _calendarDataContainerProvider;
    BOOL _unitTesting;
}

@property (readonly) CADDatabaseInitializationOptions *options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithInitializationOptions:(id)a0;

@end
