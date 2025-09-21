@interface EMIMDFREmojiCategoryListDocumentView : EMIMDFREmojiListDocumentView

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustScroll:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (char)gestureRecognizerShouldBegin:(id)a0;
- (id)_labelForIndex:(long long)a0;
- (id)_characterMatrixViewForIndex:(long long)a0;
- (void)_handlePanGesture:(id)a0;
- (void)_sendNotificationPullOutGesture:(id)a0 start:(char)a1 finished:(char)a2;

@end
