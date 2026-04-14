@class NSArray, STMOpaqueExtension;

@interface STMExtensionOperation : STMOperation

@property (copy) NSArray *returnedItems;
@property (readonly, copy, nonatomic) NSArray *allInputItems;
@property (retain) STMOpaqueExtension *extension;
@property (copy) NSArray *inputItems;

+ (id)commandName;

- (void)main;
- (void).cxx_destruct;
- (id)commandInputItem;
- (void)finishWithItems:(id)a0;

@end
