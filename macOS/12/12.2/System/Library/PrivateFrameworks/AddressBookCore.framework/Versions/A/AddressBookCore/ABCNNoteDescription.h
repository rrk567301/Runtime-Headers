@class NSString;

@interface ABCNNoteDescription : ABCNPropertyDescription <ABCNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)valueFromCoreDataContact:(id)a0;
- (void)setValue:(id)a0 onCoreDataContact:(id)a1;
- (id)coreDataRelationship;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (void)copyFromContact:(id)a0 to:(id)a1;

@end
