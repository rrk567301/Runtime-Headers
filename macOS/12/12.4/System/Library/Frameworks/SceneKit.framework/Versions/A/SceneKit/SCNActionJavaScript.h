@class NSString;

@interface SCNActionJavaScript : SCNAction {
    NSString *_script;
}

+ (BOOL)supportsSecureCoding;
+ (id)javaScriptActionWithDuration:(double)a0 script:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)parameters;
- (BOOL)isCustom;
- (id)reversedAction;

@end
