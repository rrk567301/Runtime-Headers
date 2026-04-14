@class NSArray;

@interface SCRDFRControlStripApplication : SCRSystemApplication

@property (retain, nonatomic) NSArray *_applicationFunctionRows;

- (void).cxx_destruct;
- (void)handleBrailleRoutingEvent:(id)a0 request:(id)a1;
- (BOOL)allowsFocusInto;
- (BOOL)isDFRControlStripApplication;

@end
