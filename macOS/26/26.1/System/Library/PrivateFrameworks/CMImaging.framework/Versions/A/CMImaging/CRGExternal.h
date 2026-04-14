@class NSString, CRGExplicitDimensions, CRGExplicitPixelFormat, CRGGroup;
@protocol MTLTexture;

@interface CRGExternal : NSObject <CRGExternal> {
    CRGGroup *_group;
}

@property (readonly, nonatomic) NSString *fullName;
@property (nonatomic) BOOL locked;
@property (retain, nonatomic) CRGExplicitDimensions *dimensions;
@property (retain, nonatomic) CRGExplicitPixelFormat *pixelFormat;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 group:(id)a1;
- (BOOL)verifyForRendering;

@end
