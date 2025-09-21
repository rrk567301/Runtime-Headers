@interface SiriUI.GMEnrollmentViewModel : NSObject {
    void /* unknown type, empty encoding */ _prelude;
    void /* unknown type, empty encoding */ _instruction;
    void /* unknown type, empty encoding */ _continuation;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPrelude:(id)a0 instruction:(id)a1 continuation:(id)a2;
- (void)setContinuationLabel:(id)a0;
- (void)setContinuationLabelHidden:(char)a0;
- (void)setIntructionLabel:(id)a0;
- (void)setIntructionLabelHidden:(char)a0;
- (void)setPreludeLabel:(id)a0;
- (void)setPreludeLabelHidden:(char)a0;

@end
