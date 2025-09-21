@class NSObject;
@protocol OS_dispatch_data;

@interface TSUStreamDataCompression : TSUStreamCompression {
    NSObject<OS_dispatch_data> *_outputData;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *outputData;

- (void).cxx_destruct;
- (void)setHandler:(id /* block */)a0;
- (id)initWithAlgorithm:(int)a0 operation:(int)a1;
- (char)handleData:(id)a0 isDone:(char)a1;

@end
