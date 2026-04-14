@class NSArray, ISIcon, ISImageStyleDescriptor;

@interface ISDecoratedIcon : ISConcreteIcon {
    NSArray *_decorations;
}

@property (readonly) ISIcon *icon;
@property (readonly) NSArray *decorations;
@property (readonly) ISImageStyleDescriptor *styleDescriptor;

+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (id)symbol;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)iconWithDecorations:(id)a0;
- (id)initWithIcon:(id)a0 decorations:(id)a1;
- (id)initWithIcon:(id)a0 decorations:(id)a1 styleDescriptor:(id)a2;

@end
