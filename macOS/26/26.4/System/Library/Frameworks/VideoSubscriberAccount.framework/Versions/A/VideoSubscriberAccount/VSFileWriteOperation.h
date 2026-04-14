@class NSError, VSOptional;

@interface VSFileWriteOperation : VSAsyncOperation

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VSOptional *data;
@property (retain, nonatomic) VSOptional *destination;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

@end
