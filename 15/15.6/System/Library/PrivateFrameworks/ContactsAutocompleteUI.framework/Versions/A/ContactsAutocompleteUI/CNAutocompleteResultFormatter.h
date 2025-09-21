@protocol CNAutocompleteResultWindowDelegate;

@interface CNAutocompleteResultFormatter : NSFormatter

@property (retain, nonatomic) id<CNAutocompleteResultWindowDelegate> delegate;
@property (nonatomic) char includeAddress;
@property (nonatomic) char suppressNonEmailValues;

+ (id)displayStringForResult:(id)a0 withDelegate:(id)a1;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (char)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)stringForObjectValue:(id)a0;
- (id)displayStringForResult:(id)a0;

@end
