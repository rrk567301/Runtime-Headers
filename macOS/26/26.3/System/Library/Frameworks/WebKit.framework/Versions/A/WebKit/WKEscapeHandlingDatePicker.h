@interface WKEscapeHandlingDatePicker : NSDatePicker {
    struct WeakObjCPtr<WKDateTimePicker> { id m_weakReference; } _dateTimePicker;
}

- (BOOL)acceptsFirstResponder;
- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (id).cxx_construct;
- (struct RetainPtr<WKDateTimePicker> { id x0; })dateTimePicker;
- (void)setDateTimePicker:(id)a0;

@end
