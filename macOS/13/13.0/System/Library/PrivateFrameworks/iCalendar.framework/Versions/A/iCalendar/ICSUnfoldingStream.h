@class NSString;
@protocol ICSInputByteStream;

@interface ICSUnfoldingStream : NSObject <ICSInputByteStream> {
    id<ICSInputByteStream> _underStream;
    char _char1;
    char _char2;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)read;
- (BOOL)eos;
- (id)initWithInputStream:(id)a0;
- (void)_readTwo;
- (void)_shiftRead;

@end
