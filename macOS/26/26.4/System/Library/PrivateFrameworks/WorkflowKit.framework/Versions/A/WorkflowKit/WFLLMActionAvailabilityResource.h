@interface WFLLMActionAvailabilityResource : WFResource {
    int _gmsNotifyToken;
}

+ (BOOL)isSingleton;
+ (BOOL)mustBeAvailableForDisplay;

- (id)initWithDefinition:(id)a0;
- (void)dealloc;
- (id)actionDisabledError;
- (void)refreshAvailability;

@end
