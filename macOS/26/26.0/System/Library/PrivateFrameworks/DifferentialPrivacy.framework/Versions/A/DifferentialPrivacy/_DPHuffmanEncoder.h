@class NSString;

@interface _DPHuffmanEncoder : NSObject

@property (readonly, copy, nonatomic) NSString *tableUUID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTableClassName:(id)a0 maxOutputBitLength:(unsigned long long)a1;
- (BOOL)tokenExist:(id)a0;
- (id)encodeTokens:(id)a0;

@end
