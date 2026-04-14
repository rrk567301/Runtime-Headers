@class NSData;

@interface PS190BootNonceHash : NSObject

@property (readonly) BOOL isEmpty;
@property (readonly) NSData *data;

- (id)initWithHash:(struct PS190RawBootNonceHash { unsigned char x0[32]; } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
