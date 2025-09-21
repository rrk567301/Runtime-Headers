@interface AppleTypeCRetimerPanicStatus : NSObject

@property char fwPanic;
@property unsigned int assertID;

- (id)description;
- (id)initWithPanicState:(char)a0 assertID:(unsigned int)a1;

@end
