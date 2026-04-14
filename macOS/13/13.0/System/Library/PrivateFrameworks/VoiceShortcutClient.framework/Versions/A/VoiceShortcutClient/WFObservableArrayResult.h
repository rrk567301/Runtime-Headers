@class WFResultQuery, NSArray, WFCoreDataResultState;

@interface WFObservableArrayResult : WFObservableResult

@property (readonly, nonatomic) WFCoreDataResultState *resultState;
@property (readonly, nonatomic) WFResultQuery *query;
@property (readonly, nonatomic) NSArray *values;

+ (void)getResultWithQuery:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
+ (void)getResultWithQuery:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2 roundedIcon:(BOOL)a3 completionHandler:(id /* block */)a4;
+ (id)getResultWithQuery:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
+ (id)getEmptyResultWithQuery:(id)a0 valueType:(Class)a1 glyphSize:(struct CGSize { double x0; double x1; })a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithValueType:(Class)a0 glyphSize:(struct CGSize { double x0; double x1; })a1 initialValues:(id)a2 query:(id)a3 resultState:(id)a4;
- (void)handleChangeNotification:(id)a0;

@end
