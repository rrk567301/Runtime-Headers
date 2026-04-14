@class NSString;

@interface TTSMauiVoice : NSObject {
    void /* function */ language;
    void /* function */ identifier;
    void /* function */ path;
}

@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *path;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 language:(id)a1 path:(id)a2;

@end
