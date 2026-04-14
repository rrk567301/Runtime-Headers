@class NSScriptObjectSpecifier;

@interface NSDeleteCommand : NSScriptCommand {
    NSScriptObjectSpecifier *_keySpecifier;
}

@property (readonly, retain) NSScriptObjectSpecifier *keySpecifier;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)performDefaultImplementation;
- (void)setReceiversSpecifier:(id)a0;

@end
