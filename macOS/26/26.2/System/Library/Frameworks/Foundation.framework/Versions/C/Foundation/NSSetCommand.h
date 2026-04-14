@class NSScriptObjectSpecifier;

@interface NSSetCommand : NSScriptCommand {
    NSScriptObjectSpecifier *_keySpecifier;
}

@property (readonly, retain) NSScriptObjectSpecifier *keySpecifier;

+ (BOOL)_getArguments:(id)a0 withParameters:(struct { id x0; id x1; id x2; id x3; })a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)performDefaultImplementation;
- (void)setReceiversSpecifier:(id)a0;

@end
