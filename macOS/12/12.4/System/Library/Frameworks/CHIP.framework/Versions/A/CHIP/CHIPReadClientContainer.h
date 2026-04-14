@interface CHIPReadClientContainer : NSObject

@property (nonatomic) void *readClientPtr;
@property (nonatomic) struct AttributePathParams { unsigned short x0; unsigned int x1; unsigned int x2; unsigned short x3; } *pathParams;
@property (nonatomic) unsigned long long deviceId;

- (void)dealloc;
- (void)onDone;

@end
