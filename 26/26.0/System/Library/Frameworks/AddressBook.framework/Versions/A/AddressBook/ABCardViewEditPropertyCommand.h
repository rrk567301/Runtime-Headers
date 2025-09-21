@class NSString;
@protocol ABCardViewDataSourceProvider, NSObject;

@interface ABCardViewEditPropertyCommand : ABBookUndoableCommand

@property (retain, nonatomic) id<ABCardViewDataSourceProvider> dataSourceProvider;
@property (retain, nonatomic) id<NSObject> oldValue;
@property (retain, nonatomic) id<NSObject> updatedValue;
@property (copy, nonatomic) NSString *propertyKey;

- (void)execute;
- (void).cxx_destruct;
- (void)executeUndo;
- (id)initWithDataSourceProvider:(id)a0 propertyKey:(id)a1 oldValue:(id)a2 updatedValue:(id)a3;

@end
