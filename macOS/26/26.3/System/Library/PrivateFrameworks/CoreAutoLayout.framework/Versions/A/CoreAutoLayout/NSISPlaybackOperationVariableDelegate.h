@class NSString, NSISVariable;

@interface NSISPlaybackOperationVariableDelegate : NSObject

@property (retain) NSISVariable *variable;
@property (copy) NSString *variableDescription;
@property (copy) NSString *markedConstraintDescription;
@property BOOL variableIsUserObservable;
@property int orientationHint;

- (int)nsis_orientationHintForVariable:(id)a0;
- (id)description;
- (void)nsis_valueOfVariable:(id)a0 didChangeInEngine:(id)a1;
- (void)dealloc;
- (id)nsis_descriptionOfVariable:(id)a0;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)a0;
- (id)firstItem;
- (void)_addToEngine:(id)a0;
- (id)secondItem;

@end
