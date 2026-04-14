@interface WKEscapeHandlingDatePicker : NSDatePicker {
    struct WeakObjCPtr<WKDateTimePicker> { id m_weakReference; } _dateTimePicker;
}

- (BOOL)acceptsFirstResponder;
- (void)keyDown:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct RetainPtr<WKDateTimePicker> { id x0; })dateTimePicker;
- (void)setDateTimePicker:(id)a0;

@end
