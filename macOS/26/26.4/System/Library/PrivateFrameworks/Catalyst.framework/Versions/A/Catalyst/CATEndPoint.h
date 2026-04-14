@class NSData, CATAddress;

@interface CATEndPoint : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) CATAddress *address;
@property (readonly, nonatomic) unsigned int port;

- (id)initWithData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithAddress:(id)a0 port:(unsigned int)a1;
- (BOOL)isEqualToEndPoint:(id)a0;

@end
