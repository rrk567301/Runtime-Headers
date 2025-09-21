@interface ACETaskCommandDFUf : ACETaskCommand

@property (readonly) char forceDFUMode;
@property (readonly) char allowOnlyIfConnected;

- (id)description;
- (id)inputData;
- (id)initWithForceDFUMode:(char)a0 allowOnlyIfConnected:(char)a1;

@end
