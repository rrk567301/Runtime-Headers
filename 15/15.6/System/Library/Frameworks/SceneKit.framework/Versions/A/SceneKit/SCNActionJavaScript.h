@class NSString;

@interface SCNActionJavaScript : SCNAction {
    NSString *_script;
}

+ (char)supportsSecureCoding;
+ (id)javaScriptActionWithDuration:(double)a0 script:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)parameters;
- (char)isCustom;
- (id)reversedAction;

@end
