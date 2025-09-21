@class NSData, NSString;

@interface _STKStickerUIStickerRepresentation : NSObject {
    void /* function */ data;
    void /* function */ type;
    void /* function */ role;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } size;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 type:(id)a1 size:(struct CGSize { double x0; double x1; })a2 role:(id)a3;

@end
