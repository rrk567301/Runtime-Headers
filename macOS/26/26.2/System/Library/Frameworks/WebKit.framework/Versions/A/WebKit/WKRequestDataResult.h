@class NSData;

@interface WKRequestDataResult : NSObject

@property (retain, nonatomic) NSData *requestDataBytes;
@property (nonatomic) unsigned char protocol;

- (void)dealloc;
- (id)initWithRequestDataBytes:(id)a0 protocol:(unsigned char)a1;

@end
