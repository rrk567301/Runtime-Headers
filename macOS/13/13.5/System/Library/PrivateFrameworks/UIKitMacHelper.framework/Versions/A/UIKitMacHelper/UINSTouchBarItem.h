@class NSString, NSDictionary;

@interface UINSTouchBarItem : NSTouchBarItem <UINSTouchBarItem>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *representedClass;
@property (retain, nonatomic) NSDictionary *itemDescription;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (copy, nonatomic) id /* block */ changeHandler;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
