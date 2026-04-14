@interface FigCaptureMachPortSendRight : NSObject {
    BOOL _invalid;
}

@property (readonly, nonatomic) unsigned int port;

- (void)invalidate;
- (id)initWithPort:(unsigned int)a0;
- (id)description;
- (void)dealloc;

@end
