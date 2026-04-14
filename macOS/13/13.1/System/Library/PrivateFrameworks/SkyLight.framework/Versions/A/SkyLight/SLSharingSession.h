@class NSUUID, NSString;

@interface SLSharingSession : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSUUID *uuid_internal;
@property (nonatomic) unsigned int lifetimePort;
@property (nonatomic) int type;
@property (readonly, copy, nonatomic) NSString *title;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)content;
- (void)setContent:(id)a0;
- (id)initWithTitle:(id)a0 noPill:(BOOL)a1;
- (void)showPicker;
- (BOOL)isEqualToSharingSession:(id)a0;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; })getUUIDBytes;
- (id)initFromUUID:(id)a0;
- (id)initWithUUID:(id)a0 title:(id)a1 type:(int)a2;

@end
