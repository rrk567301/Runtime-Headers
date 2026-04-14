@class NSString;

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate>

@property (copy) NSString *name;
@property int valueRestriction;
@property BOOL shouldBeMinimized;
@property BOOL valueIsUserObservable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)nsis_orientationHintForVariable:(id)a0;
- (void)nsis_valueOfVariable:(id)a0 didChangeInEngine:(id)a1;
- (id)initWithCoder:(id)a0;
- (oneway void)dealloc;
- (id)nsis_descriptionOfVariable:(id)a0;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)a0;
- (id)markedConstraint;
- (void)encodeWithCoder:(id)a0;

@end
