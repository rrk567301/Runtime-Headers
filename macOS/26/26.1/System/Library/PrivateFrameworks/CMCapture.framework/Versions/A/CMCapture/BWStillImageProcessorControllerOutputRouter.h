@class NSString, NSArray, NSMutableArray;

@interface BWStillImageProcessorControllerOutputRouter : NSObject {
    NSMutableArray *_bypassedProcessorTypes;
}

@property (readonly, nonatomic) id /* block */ outputSampleBufferRouter;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *bypassedProcessorsTypes;

- (void)dealloc;
- (void)addBypassedProcessorType:(unsigned long long)a0;
- (id)initWithOutputSampleBufferRouter:(id /* block */)a0 name:(id)a1;

@end
