@class CABTLEMIDIImpl;

@interface CABTLEMIDIWindowController : NSWindowController {
    CABTLEMIDIImpl *_impl;
}

- (void)awakeFromNib;
- (id)initWithWindow:(id)a0;
- (id)windowNibName;
- (void)windowDidLoad;

@end
