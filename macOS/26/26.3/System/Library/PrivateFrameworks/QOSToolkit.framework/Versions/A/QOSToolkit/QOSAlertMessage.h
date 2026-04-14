@class QOSAlertMessageInternal;

@interface QOSAlertMessage : NSObject

@property (readonly) QOSAlertMessageInternal *underlyingObject;

- (id)title;
- (void).cxx_destruct;
- (id)body;
- (id)initWithTitle:(id)a0 body:(id)a1;

@end
