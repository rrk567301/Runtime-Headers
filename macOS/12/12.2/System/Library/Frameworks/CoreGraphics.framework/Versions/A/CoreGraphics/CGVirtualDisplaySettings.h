@class NSArray;

@interface CGVirtualDisplaySettings : NSObject {
    NSArray *_modes;
    double _refreshDeadline;
}

@property (nonatomic) double refreshDeadline;
@property (retain, nonatomic) NSArray *modes;
@property (nonatomic) unsigned int hiDPI;
@property (nonatomic) unsigned int rotation;

- (void)dealloc;
- (id)init;

@end
