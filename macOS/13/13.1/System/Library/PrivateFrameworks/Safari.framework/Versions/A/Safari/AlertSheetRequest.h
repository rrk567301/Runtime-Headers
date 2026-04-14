@class NSAlert;

@interface AlertSheetRequest : SheetRequest

@property (readonly, nonatomic) NSAlert *alert;
@property (readonly, nonatomic) id /* block */ completionHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAlert:(id)a0 completionHandler:(id /* block */)a1;
- (void)displaySheet;

@end
