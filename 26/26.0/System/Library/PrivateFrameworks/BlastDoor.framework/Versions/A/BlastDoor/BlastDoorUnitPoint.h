@class NSString;

@interface BlastDoorUnitPoint : NSObject {
    void /* unknown type, empty encoding */ unitPoint;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) double x;
@property (nonatomic, readonly) double y;

- (id)init;

@end
