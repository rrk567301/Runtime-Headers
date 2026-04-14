@class CABTLEMIDIImpl;

@interface CABTLEMIDIWindowController : NSWindowController {
    CABTLEMIDIImpl *_impl;
}

- (id)initWithWindow:(id)a0;
- (void)awakeFromNib;
- (id)windowNibName;
- (void)windowDidLoad;

@end
