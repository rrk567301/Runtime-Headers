@interface ASGreenTeaLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

- (id)init;
- (void)dealloc;
- (void)willAccessLocationForSearch;
- (void)willRequestAppList;
- (void)willTransmitLocationForSearch;

@end
