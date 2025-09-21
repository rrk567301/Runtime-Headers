@class CECRouter;

@interface CECRouterInterface : CECInterface {
    CECRouter *_router;
}

- (void)dealloc;
- (id)properties;
- (id)initWithRouter:(id)a0;
- (char)sendFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a0 withRetryCount:(unsigned char)a1 error:(id *)a2;
- (void)receivedFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a0;
- (char)setAddressMask:(unsigned short)a0 error:(id *)a1;
- (char)setHardwareAddressMask:(unsigned short)a0 error:(id *)a1;
- (char)setSnoopingMode:(char)a0 error:(id *)a1;

@end
