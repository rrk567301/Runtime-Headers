@class NSString;

@interface SCROBrailleUICaptionableBrailleLine : NSObject {
    void /* unknown type, empty encoding */ _braille;
    void /* unknown type, empty encoding */ _selection;
    void /* unknown type, empty encoding */ translatedCaption;
    void /* unknown type, empty encoding */ manualCaption;
    void /* function */ mathML;
}

@property (nonatomic, copy) NSString *mathML;
@property (nonatomic, readonly) NSString *braille;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } selection;
@property (nonatomic, readonly) NSString *caption;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBraille:(id)a0 selection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setManualCaption:(id)a0;

@end
