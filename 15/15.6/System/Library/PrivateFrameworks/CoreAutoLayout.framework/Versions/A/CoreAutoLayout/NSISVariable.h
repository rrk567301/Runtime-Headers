@class NSArray, NSMapTable, NSISEngine;
@protocol NSISVariableDelegate;

@interface NSISVariable : NSObject <NSCoding> {
    NSMapTable *_overflowEngines;
    NSISEngine *_engines[3];
    struct { unsigned int value; } _engineVarIndexes[3];
    unsigned int _ident;
}

@property id<NSISVariableDelegate> delegate;
@property (readonly) char shouldBeMinimized;
@property (readonly) int valueRestriction;
@property (readonly) int orientationHint;
@property (readonly) NSArray *engines;

+ (id)variableWithDelegate:(id)a0 valueRestriction:(int)a1 shouldBeMinimized:(char)a2;
+ (id)variableMarkingConstraint:(id)a0 valueRestriction:(int)a1 shouldBeMinimized:(char)a2;
+ (id)variableWithName:(id)a0 valueRestriction:(int)a1 shouldBeMinimized:(char)a2;
+ (id)variableWithName:(id)a0 valueRestriction:(int)a1 shouldBeMinimized:(char)a2 valueIsUserObservable:(char)a3;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (id)descriptionInEngine:(id)a0;
- (id)markedConstraint;
- (char)markedConstraintIsEligibleForIntegralizationAdjustment;
- (struct { unsigned int x0; })overflowEngineVarIndexForEngine:(id)a0;
- (char)shouldBeIntegral;
- (char)valueIsUserVisible;

@end
