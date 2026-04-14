@class NSString;
@protocol ICSInputByteStream;

@interface ICSPushbackStream : NSObject <ICSInputByteStream> {
    id<ICSInputByteStream> _underStream;
    char *_pbData;
    int _pbCursor;
    BOOL _readPastEOS;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)peek;
- (BOOL)pushBack:(char)a0;
- (void).cxx_destruct;
- (char)read;
- (BOOL)eos;
- (id)initWithInputStream:(id)a0;

@end
