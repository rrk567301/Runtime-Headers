@interface WFLLMActionAvailabilityResource : WFResource {
    int _gmsNotifyToken;
}

+ (BOOL)isSingleton;
+ (BOOL)mustBeAvailableForDisplay;

- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (id)actionDisabledError;
- (void)refreshAvailability;

@end
