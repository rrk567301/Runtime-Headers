@interface ACETaskCommandVOUT : ACETaskCommand

@property (readonly) char enabled;
@property (readonly) char forceDFU;

- (id)description;
- (id)inputData;
- (id)initWithEnabled:(char)a0 forceDFU:(char)a1;

@end
