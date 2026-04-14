@class NSString, NSDictionary, _TtC10SILManager15SILFlipBookDesc;

@interface SILManager.SILAssetDesc : SILManager.SILMgrCommonBase {
    void /* function */ name;
    void /* function */ blobName;
    void /* function */ userInfo;
    void /* unknown type, empty encoding */ blobHandle;
    void /* unknown type, empty encoding */ framesBuffer;
}

@property (nonatomic) long long type;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long extent;
@property (nonatomic, readonly) long long Bpr;
@property (nonatomic, readonly) NSString *blobName;
@property (nonatomic, readonly) _TtC10SILManager15SILFlipBookDesc *flipbook;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) const struct SILFrameDesc { float x0; float x1; float x2; short x3; short x4; unsigned int x5; unsigned int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; } *frames;
@property (nonatomic, readonly) unsigned int framesCount;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)decompress:(unsigned short)a0 into:(void *)a1 withSize:(long long)a2;
- (BOOL)frameDelayedWithFrameNumber:(unsigned short)a0;
- (BOOL)frameInsecureWithFrameNumber:(unsigned short)a0;
- (struct CGPoint { double x0; double x1; })framePosOffsetWithFrameNumber:(unsigned short)a0;
- (float)frameSize:(unsigned short)a0;

@end
