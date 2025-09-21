@class NSDictionary;
@protocol CECInterfaceDelegate;

@interface CECInterface : CoreRCInterface

@property (nonatomic) struct CECFrame { unsigned char blocks[16]; unsigned char length : 5; unsigned char reserved : 3; } lastReceivedFrame;
@property (nonatomic) id<CECInterfaceDelegate> delegate;
@property (readonly, nonatomic) unsigned short addressMask;
@property (readonly, nonatomic) char hasMultipleLogicalAddresses;
@property (readonly, nonatomic) char snoopingMode;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) char hibernating;

- (id)init;
- (id)properties;
- (char)sendMessage:(id)a0 error:(id *)a1;
- (char)sendFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a0 withRetryCount:(unsigned char)a1 error:(id *)a2;
- (char)allocateCECAddress:(unsigned char *)a0 forDeviceType:(unsigned char)a1 error:(id *)a2;
- (char)deallocateCECAddress:(unsigned char)a0 error:(id *)a1;
- (void)didChangeProperties;
- (char)errorIsNack:(id)a0;
- (char)hasMultipleLogicalAddresses;
- (void)hibernationChanged:(char)a0;
- (char)pingTo:(unsigned char)a0 acknowledged:(char *)a1 error:(id *)a2;
- (void)receivedFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a0;
- (char)sendFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a0 error:(id *)a1;
- (char)sendMessage:(id)a0 withRetryCount:(unsigned char)a1 error:(id *)a2;
- (char)setAddressMask:(unsigned short)a0 error:(id *)a1;
- (char)setHardwareAddressMask:(unsigned short)a0 error:(id *)a1;
- (char)setSnoopingMode:(char)a0 error:(id *)a1;

@end
