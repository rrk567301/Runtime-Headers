@class CABTLEMIDIImpl;

@interface CABTLEMIDIWindowController : NSWindowController {
    CABTLEMIDIImpl *_impl;
}

- (id)windowNibName;
- (void)windowDidLoad;
- (id)initWithWindow:(id)a0;
- (void)awakeFromNib;

@end
