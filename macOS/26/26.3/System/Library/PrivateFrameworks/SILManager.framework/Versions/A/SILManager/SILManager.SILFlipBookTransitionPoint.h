@interface SILManager.SILFlipBookTransitionPoint : SILManager.SILMgrCommonBase {
    void /* unknown type, empty encoding */ rangesBuffer;
}

@property (readonly, nonatomic) const struct SILFlipBookRange { unsigned short x0; unsigned short x1; float x2; } *ranges;
@property (readonly, nonatomic) unsigned int rangesCount;
@property (readonly, nonatomic) const struct SILFlipBookRange { unsigned short x0; unsigned short x1; float x2; } *begin;
@property (readonly, nonatomic) const struct SILFlipBookRange { unsigned short x0; unsigned short x1; float x2; } *end;
@property (readonly, nonatomic) const struct SILFlipBookRange { unsigned short x0; unsigned short x1; float x2; } *ranges;
@property (readonly, nonatomic) unsigned int rangesCount;
@property (readonly, nonatomic) const struct SILFlipBookRange { unsigned short x0; unsigned short x1; float x2; } *begin;
@property (readonly, nonatomic) const struct SILFlipBookRange { unsigned short x0; unsigned short x1; float x2; } *end;
@property (nonatomic, readonly) unsigned short startFrame;
@property (nonatomic, readonly) const struct SILFlipBookRange { unsigned short x0; unsigned short x1; float x2; } *ranges;
@property (nonatomic, readonly) unsigned int rangesCount;

+ (id)parseTransitionPoints:(id)a0 :(id)a1 error:(id *)a2;

- (id)init;
- (void)dealloc;
- (id)init:(id)a0 :(unsigned short)a1 :(id)a2 error:(id *)a3;

@end
