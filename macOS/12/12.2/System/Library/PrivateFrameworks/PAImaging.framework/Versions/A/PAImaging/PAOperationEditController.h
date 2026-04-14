@class NSUUID, NSString;
@protocol PAEditController;

@interface PAOperationEditController : NSObject

@property (getter=isEnabled) BOOL enabled;
@property (readonly) NSUUID *operationUUID;
@property (readonly) NSString *operationIdentifier;
@property (readonly, weak) id<PAEditController> descriptionEditController;

- (void).cxx_destruct;
- (BOOL)enabled;
- (id)valueForUndefinedKey:(id)a0;
- (id)operation;
- (void)remove;
- (void)setOperation:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)beginInteractiveChange;
- (void)endInteractiveChange;
- (id)initWithDescriptionEditController:(id)a0 operationUUID:(id)a1;
- (void)setOperation:(id)a0 changedForKey:(id)a1;

@end
