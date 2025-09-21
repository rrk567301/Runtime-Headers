@class NSString;
@protocol ICSInputByteStream;

@interface ICSPushbackStream : NSObject <ICSInputByteStream> {
    id<ICSInputByteStream> _underStream;
    char *_pbData;
    int _pbCursor;
    char _readPastEOS;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (char)peek;
- (char)read;
- (char)eos;
- (id)initWithInputStream:(id)a0;
- (char)pushBack:(char)a0;

@end
