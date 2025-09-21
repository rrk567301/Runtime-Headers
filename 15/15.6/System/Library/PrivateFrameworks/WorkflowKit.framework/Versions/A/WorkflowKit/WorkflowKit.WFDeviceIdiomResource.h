@interface WorkflowKit.WFDeviceIdiomResource : WFResource {
    void /* unknown type, empty encoding */ requirement;
}

@property (nonatomic, readonly) char isEqual;
@property (nonatomic, readonly) long long idiom;

+ (char)mustBeAvailableForDisplay;

- (id)init;
- (id)initWithDefinition:(id)a0;
- (void)refreshAvailability;

@end
