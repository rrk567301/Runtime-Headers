@class CABTLEMIDIImpl;

@interface CABTLEMIDIWindowController : NSWindowController {
    CABTLEMIDIImpl *_impl;
}

- (id)windowNibName;
- (id)initWithWindow:(id)a0;
- (void)windowDidLoad;
- (void)awakeFromNib;

@end
