@class NSUUID, NSString;

@interface TranslationUI.VisualTranslationResult : NSObject <TranslationUI.LTUIVisualTranslationResultProtocol> {
    void /* unknown type, empty encoding */ uuid;
    void /* function */ string;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) BOOL isPassthrough;
@property (nonatomic, readonly) struct CGPoint { double x0; double x1; } topLeft;
@property (nonatomic, readonly) struct CGPoint { double x0; double x1; } topRight;
@property (nonatomic, readonly) struct CGPoint { double x0; double x1; } bottomLeft;
@property (nonatomic, readonly) struct CGPoint { double x0; double x1; } bottomRight;

- (id)init;
- (void).cxx_destruct;

@end
