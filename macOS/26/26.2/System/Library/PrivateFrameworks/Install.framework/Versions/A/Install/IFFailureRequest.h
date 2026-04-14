@class NSString, NSNumber;

@interface IFFailureRequest : NSObject

@property (retain) NSString *elementClassName;
@property (retain) NSNumber *crashAtProgress;

- (id)description;
- (void)dealloc;
- (id)initWithElementName:(id)a0 crashAtProgress:(id)a1;

@end
