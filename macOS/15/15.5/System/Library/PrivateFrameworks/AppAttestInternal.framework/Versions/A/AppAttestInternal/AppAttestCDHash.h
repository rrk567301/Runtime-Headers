@class NSData;

@interface AppAttestCDHash : NSObject

@property (retain, nonatomic) NSData *cdHash;
@property (nonatomic) unsigned char type;

- (void).cxx_destruct;
- (id)initWithHash:(id)a0 andType:(unsigned char)a1;

@end
