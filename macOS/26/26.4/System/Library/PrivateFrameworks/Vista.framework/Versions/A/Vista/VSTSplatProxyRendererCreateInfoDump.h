@class VSTSplatProxyRendererCreateOptionsDump;

@interface VSTSplatProxyRendererCreateInfoDump : VSTSplatVersionDump

@property (nonatomic) int primitive;
@property (nonatomic) int technique;
@property (nonatomic) int colorMode;
@property (nonatomic) int depthMode;
@property (nonatomic) int depthQuality;
@property (nonatomic) int layout;
@property (nonatomic) unsigned long long shOrder;
@property (nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic) unsigned long long depthPixelFormat;
@property (nonatomic) unsigned long long gridDepthPixelFormat;
@property (nonatomic) unsigned long long numViews;
@property (nonatomic) unsigned long long maxNumVolumes;
@property (retain, nonatomic) VSTSplatProxyRendererCreateOptionsDump *options;

+ (BOOL)supportsSecureCoding;

- (id)initWithInfo:(const struct CreateInfo { id x0; int x1; int x2; int x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; struct CreateOptions { BOOL x0; } x13; struct CreateOptions { int x0; int x1; unsigned long long x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } x14; } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)initWithCoder:(id)a0;
- (struct CreateInfo { id x0; int x1; int x2; int x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; struct CreateOptions { BOOL x0; } x13; struct CreateOptions { int x0; int x1; unsigned long long x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } x14; })makeInfoWithDevice:(id)a0;

@end
