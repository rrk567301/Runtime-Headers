@interface WorkflowKit.WFDeviceIdiomResource : WFResource {
    void /* unknown type, empty encoding */ requirement;
}

@property (nonatomic, readonly) BOOL isEqual;
@property (nonatomic, readonly) long long idiom;

+ (BOOL)mustBeAvailableForDisplay;

- (id)initWithDefinition:(id)a0;
- (id)init;
- (void)refreshAvailability;

@end
