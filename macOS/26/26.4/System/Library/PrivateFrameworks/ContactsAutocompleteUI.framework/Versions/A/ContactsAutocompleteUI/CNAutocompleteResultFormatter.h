@protocol CNAutocompleteResultWindowDelegate;

@interface CNAutocompleteResultFormatter : NSFormatter

@property (retain, nonatomic) id<CNAutocompleteResultWindowDelegate> delegate;
@property (nonatomic) BOOL includeAddress;
@property (nonatomic) BOOL suppressNonEmailValues;

+ (id)displayStringForResult:(id)a0 withDelegate:(id)a1;

- (id)stringForObjectValue:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)displayStringForResult:(id)a0;

@end
