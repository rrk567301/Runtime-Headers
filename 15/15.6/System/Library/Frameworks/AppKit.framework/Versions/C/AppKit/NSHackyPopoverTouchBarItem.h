@interface NSHackyPopoverTouchBarItem : NSPopoverTouchBarItem {
    unsigned char _visible : 1;
}

@property (getter=isVisible) char visible;

@end
