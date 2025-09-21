@class NSString;

@interface _STKStickerRepresentationRole : NSObject {
    void /* function */ keyboardPreview;
    void /* function */ stillVariant;
    void /* function */ animatedVariant;
}

@property (nonatomic, readonly) NSString *keyboardPreview;
@property (nonatomic, readonly) NSString *stillVariant;
@property (nonatomic, readonly) NSString *animatedVariant;

- (id)init;
- (void).cxx_destruct;

@end
