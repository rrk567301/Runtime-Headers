@class NSString;

@interface SILManager.SILCursorDesc : SILManager.SILAssetDesc {
    void /* function */ overlayFormat;
    void /* function */ outlineFormat;
    void /* function */ fillFormat;
    void /* function */ axCursorName;
    void /* function */ readableName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_overlaySize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_outlineSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fillSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maxBpr;
}

@property (nonatomic, readonly) long long scale;
@property (nonatomic, readonly) NSString *overlayFormat;
@property (nonatomic, readonly) NSString *outlineFormat;
@property (nonatomic, readonly) NSString *fillFormat;
@property (nonatomic, readonly) long long overlayOffset;
@property (nonatomic, readonly) long long outlineOffset;
@property (nonatomic, readonly) long long fillOffset;
@property (nonatomic, readonly) long long hotx;
@property (nonatomic, readonly) long long hoty;
@property (nonatomic) long long cursorType;
@property (nonatomic, readonly) NSString *axCursorName;
@property (nonatomic, readonly) NSString *readableName;
@property (nonatomic) long long overlaySize;
@property (nonatomic) long long outlineSize;
@property (nonatomic) long long fillSize;
@property (nonatomic) long long maxBpr;

+ (id)createFromData:(id)a0;

- (void).cxx_destruct;
- (long long)getPixelFormatSizeFrom:(id)a0;

@end
