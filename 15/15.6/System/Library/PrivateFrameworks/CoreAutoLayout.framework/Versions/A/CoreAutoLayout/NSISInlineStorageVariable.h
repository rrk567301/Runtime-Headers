@class NSString;

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate>

@property (copy) NSString *name;
@property int valueRestriction;
@property char shouldBeMinimized;
@property char valueIsUserObservable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)nsis_descriptionOfVariable:(id)a0;
- (int)nsis_orientationHintForVariable:(id)a0;
- (void)nsis_valueOfVariable:(id)a0 didChangeInEngine:(id)a1;
- (char)nsis_valueOfVariableIsUserObservable:(id)a0;
- (id)markedConstraint;

@end
