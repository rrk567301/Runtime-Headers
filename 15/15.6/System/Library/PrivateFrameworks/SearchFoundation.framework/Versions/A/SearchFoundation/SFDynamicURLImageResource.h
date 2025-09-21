@class NSString, NSArray, NSDictionary, NSData;

@interface SFDynamicURLImageResource : NSObject <SFDynamicURLImageResource, NSSecureCoding, NSCopying> {
    struct { unsigned char pixelWidth : 1; unsigned char pixelHeight : 1; unsigned char supportsResizing : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double pixelWidth;
@property (nonatomic) double pixelHeight;
@property (copy, nonatomic) NSString *formatURL;
@property (nonatomic) char supportsResizing;
@property (copy, nonatomic) NSArray *imageOptions;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)_sf_replacementStringForPropertyEntryKey:(id)a0 value:(id)a1;
- (id)_sf_urlForSettings:(id)a0 shouldResize:(char)a1 width:(double)a2 height:(double)a3;
- (char)hasPixelHeight;
- (char)hasPixelWidth;
- (char)hasSupportsResizing;
- (id)sf_urlForSettings:(id)a0;
- (id)sf_urlForSettings:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
