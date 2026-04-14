@class NSString;

@interface CSDarkWakePowerAssertionMac : NSObject {
    unsigned int _assertionID;
    NSString *_description;
}

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDescription:(id)a0 timeout:(double)a1;

@end
