@class NSString;

@interface SCNActionJavaScript : SCNAction {
    NSString *_script;
}

+ (BOOL)supportsSecureCoding;
+ (id)javaScriptActionWithDuration:(double)a0 script:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (id)parameters;
- (void)dealloc;
- (BOOL)isCustom;
- (id)reversedAction;

@end
