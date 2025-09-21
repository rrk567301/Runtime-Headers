@interface TokenGenerationInference.TGITokenMaskObjC : NSObject {
    void /* unknown type, empty encoding */ tokenMask;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long leadingZeroCount;
@property (nonatomic, readonly) long long middleOneCount;

- (id)init;
- (void).cxx_destruct;
- (void)getTrailingMaskBytes:(id /* block */)a0;

@end
