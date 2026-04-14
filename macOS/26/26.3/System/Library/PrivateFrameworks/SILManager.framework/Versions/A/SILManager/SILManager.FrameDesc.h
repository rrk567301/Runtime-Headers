@interface SILManager.FrameDesc : SILManager.SILMgrCommonBase

@property (nonatomic, readonly) unsigned int dataOffset;
@property (nonatomic, readonly) unsigned int dataSize;
@property (nonatomic, readonly) float time;
@property (nonatomic, readonly) float size;
@property (nonatomic, readonly) float blur;
@property (nonatomic, readonly) short posOffsetX;
@property (nonatomic, readonly) short posOffsetY;
@property (nonatomic, readonly) BOOL unnoticeable;
@property (nonatomic, readonly) BOOL skipEic;
@property (nonatomic, readonly) BOOL insecure;
@property (nonatomic, readonly) BOOL delayed;

- (id)init;
- (struct SILFrameDesc { float x0; float x1; float x2; short x3; short x4; unsigned int x5; unsigned int x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; })getSILFrameDesc;

@end
