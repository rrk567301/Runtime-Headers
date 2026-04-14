@class NSString, NSArray, NSSet;

@interface UINSTouchBar : NSTouchBar <UINSTouchBar> {
    NSString *_principalItemIdentifier;
}

@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSString *principalItemIdentifier;
@property (retain, nonatomic) NSSet *templateItems;
@property (nonatomic) BOOL allowsCustomization;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (copy, nonatomic) id /* block */ itemChangeHandler;

+ (id)sharedTouchBar;

- (void).cxx_destruct;

@end
