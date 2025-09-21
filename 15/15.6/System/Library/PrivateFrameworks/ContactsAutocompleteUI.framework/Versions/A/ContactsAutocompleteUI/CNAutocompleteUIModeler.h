@class NSMutableArray;
@protocol CNAutocompleteResultWindowDelegate;

@interface CNAutocompleteUIModeler : NSObject

@property (retain) id<CNAutocompleteResultWindowDelegate> delegate;
@property (retain) NSMutableArray *model;
@property char returnAutocompleteResults;

+ (id)mixedModelWithResults:(id)a0 includeAddress:(char)a1 onlyEmailFormat:(char)a2 delegate:(id)a3;

- (void).cxx_destruct;
- (void)addFoundInMailResults:(id)a0;
- (void)addFoundOnServersResults:(id)a0;
- (void)addNormalResults:(id)a0;
- (void)addResults:(id)a0 sectionLabel:(id)a1 includeHeader:(char)a2;
- (id)initWithDelegate:(id)a0 includeAddress:(char)a1 onlyEmailFormat:(char)a2;
- (id)mixedModelWithResults:(id)a0;
- (id)partitionResults:(id)a0;

@end
