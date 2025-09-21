@class NSString;
@protocol MTLTexture;

@interface CRGNodeRenderTexture : NSObject <CRGNodeRenderTexture> {
    id<MTLTexture> _texture;
    struct { void /* unknown type, empty encoding */ offset; void /* unknown type, empty encoding */ originalSize; void /* unknown type, empty encoding */ validOffset; void /* unknown type, empty encoding */ validSize; } _info;
}

@property (retain, nonatomic) NSString *debugName;
@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) struct { } info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
