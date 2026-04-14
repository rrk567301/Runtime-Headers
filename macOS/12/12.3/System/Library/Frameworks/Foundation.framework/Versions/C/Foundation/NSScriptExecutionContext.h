@interface NSScriptExecutionContext : NSObject {
    id _topLevelObject;
    id _objectBeingTested;
    id _rangeContainerObject;
    id _moreVars;
}

@property (retain) id topLevelObject;
@property (retain) id objectBeingTested;
@property (retain) id rangeContainerObject;

+ (id)sharedScriptExecutionContext;

- (void)dealloc;
- (id)init;
- (void)_setErrorNumber:(short)a0;
- (void)_setErrorOffendingObjectDescriptor:(id)a0;
- (void)_setErrorExpectedType:(unsigned int)a0;
- (id)_topLevelObjectClassDescription;
- (long long)_debugLoggingLevel;
- (void)_setErrorWithEvaluatedObjectSpecifier:(id)a0;
- (short)_errorNumber;
- (id)_errorOffendingObjectDescriptor;
- (void)_setRangeContainerClassDescription:(id)a0;
- (id)_testedObjectTypeDescription;
- (void)_setErrorExpectedTypeDescriptor:(id)a0;
- (id)_rangeContainerClassDescription;
- (void)_setTestedObjectTypeDescription:(id)a0;
- (id)_errorExpectedTypeDescriptor;
- (void)_resetErrorInfo;

@end
