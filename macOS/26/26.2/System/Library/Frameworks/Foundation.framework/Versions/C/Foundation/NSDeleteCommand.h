@class NSScriptObjectSpecifier;

@interface NSDeleteCommand : NSScriptCommand {
    NSScriptObjectSpecifier *_keySpecifier;
}

@property (readonly, retain) NSScriptObjectSpecifier *keySpecifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)performDefaultImplementation;
- (void)setReceiversSpecifier:(id)a0;

@end
