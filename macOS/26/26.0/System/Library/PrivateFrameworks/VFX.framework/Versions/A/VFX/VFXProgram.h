@class NSString, NSMutableDictionary;
@protocol MTLLibrary, VFXMetalLibraryProvider, VFXProgramDelegate;

@interface VFXProgram : NSObject <NSCopying, NSSecureCoding> {
    NSString *_source;
    NSString *_vertexFunctionName;
    NSString *_fragmentFunctionName;
    NSString *_name;
    BOOL _opaque;
    id<MTLLibrary> _library;
    id<VFXMetalLibraryProvider> _libraryProvider;
    id _delegate;
    NSMutableDictionary *_bufferBindings;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *vertexFunctionName;
@property (copy, nonatomic) NSString *fragmentFunctionName;
@property (nonatomic, getter=isOpaque) BOOL opaque;
@property (nonatomic) id<VFXProgramDelegate> delegate;
@property (retain, nonatomic) id<MTLLibrary> library;

+ (id)program;
+ (id)programWithLibrary:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)init;
- (id)name;
- (id)initWithCoder:(id)a0;
- (id)libraryProvider;
- (id)_bufferBindings;
- (void)handleBindingOfBufferNamed:(id)a0 frequency:(long long)a1 usingBlock:(id /* block */)a2;
- (void)setLibraryProvider:(id)a0;

@end
