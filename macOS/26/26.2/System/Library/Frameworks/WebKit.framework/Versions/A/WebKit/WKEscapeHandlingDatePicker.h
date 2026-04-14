@interface WKEscapeHandlingDatePicker : NSDatePicker {
    struct WeakObjCPtr<WKDateTimePicker> { id m_weakReference; } _dateTimePicker;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)acceptsFirstResponder;
- (void)keyDown:(id)a0;
- (struct RetainPtr<WKDateTimePicker> { id x0; })dateTimePicker;
- (void)setDateTimePicker:(id)a0;

@end
