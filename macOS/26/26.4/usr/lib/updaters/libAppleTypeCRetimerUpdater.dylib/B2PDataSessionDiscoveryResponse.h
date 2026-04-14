@class NSArray;

@interface B2PDataSessionDiscoveryResponse : B2PResponse

@property (readonly) NSArray *entries;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRoute:(unsigned char)a0 status:(int)a1 data:(id)a2;
- (BOOL)parseResponse:(id)a0;

@end
