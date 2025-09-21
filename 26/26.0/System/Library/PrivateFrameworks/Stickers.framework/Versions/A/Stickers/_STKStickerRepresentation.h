@class _STKStickerRepresentationRole, NSUUID, UTType, NSData, NSString, _STKStickerEffect;

@interface _STKStickerRepresentation : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ stickerIdentifier;
    void /* function */ data;
    void /* unknown type, empty encoding */ uti;
    void /* function */ role;
}

@property (class, nonatomic, readonly) _STKStickerRepresentationRole *roles;

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSUUID *stickerIdentifier;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) UTType *uti;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } size;
@property (nonatomic, readonly) _STKStickerEffect *effect;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
