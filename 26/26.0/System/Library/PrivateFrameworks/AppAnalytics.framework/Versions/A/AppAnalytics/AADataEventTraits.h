@interface AADataEventTraits : NSObject

@property (nonatomic) BOOL onlyOnce;
@property (nonatomic) BOOL unique;
@property (nonatomic) BOOL discardWhenPresent;

- (id)init;

@end
