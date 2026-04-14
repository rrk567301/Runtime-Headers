@class NSString, NSISVariable;

@interface NSISPlaybackOperationVariableDelegate : NSObject

@property (retain) NSISVariable *variable;
@property (copy) NSString *variableDescription;
@property (copy) NSString *markedConstraintDescription;
@property BOOL variableIsUserObservable;
@property int orientationHint;

- (void)nsis_valueOfVariable:(id)a0 didChangeInEngine:(id)a1;
- (id)firstItem;
- (int)nsis_orientationHintForVariable:(id)a0;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)a0;
- (id)description;
- (id)nsis_descriptionOfVariable:(id)a0;
- (void)dealloc;
- (void)_addToEngine:(id)a0;
- (id)secondItem;

@end
