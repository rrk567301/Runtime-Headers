@class NSString, JSValue;

@interface VSJSAlertAction : NSObject <VSJSAlertAction>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *style;
@property (retain, nonatomic) JSValue *callback;

- (void).cxx_destruct;
- (id)init;

@end
