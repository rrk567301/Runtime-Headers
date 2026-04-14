@interface FigCaptureMachPortSendRight : NSObject {
    BOOL _invalid;
}

@property (readonly, nonatomic) unsigned int port;

- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)initWithPort:(unsigned int)a0;

@end
