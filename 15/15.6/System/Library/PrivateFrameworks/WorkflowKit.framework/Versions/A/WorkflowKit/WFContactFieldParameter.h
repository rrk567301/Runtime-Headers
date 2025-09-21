@class NSString, NSArray;

@interface WFContactFieldParameter : WFParameter

@property (readonly, nonatomic) char allowsTextEntry;
@property (readonly, nonatomic) NSString *keyboardType;
@property (readonly, nonatomic) NSString *textAlignment;
@property (readonly, nonatomic) NSString *autocapitalizationType;
@property (readonly, nonatomic) NSString *autocorrectionType;
@property (readonly, nonatomic) NSArray *supportedContactProperties;
@property (readonly, nonatomic) char hidesLabel;
@property (readonly, nonatomic) char allowsCustomHandles;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)stateClass;
- (Class)singleStateClass;
- (char)displaysMultipleValueEditor;
- (Class)multipleStateClass;
- (char)shouldAlignLabels;

@end
