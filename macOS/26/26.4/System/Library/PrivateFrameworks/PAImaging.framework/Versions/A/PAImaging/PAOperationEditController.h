@class NSUUID, PACompositionEditController;

@interface PAOperationEditController : NSObject

@property (getter=isEnabled) BOOL enabled;
@property (readonly) NSUUID *operationUUID;
@property (readonly, weak) PACompositionEditController *compositionEditController;

- (id)valueForUndefinedKey:(id)a0;
- (id)operation;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (BOOL)enabled;
- (void)setOperation:(id)a0;
- (void)remove;
- (void).cxx_destruct;
- (void)beginInteractiveChange;
- (void)endInteractiveChange;
- (id)initWithCompositionEditController:(id)a0 operationUUID:(id)a1;
- (void)setOperation:(id)a0 changedForKey:(id)a1;

@end
