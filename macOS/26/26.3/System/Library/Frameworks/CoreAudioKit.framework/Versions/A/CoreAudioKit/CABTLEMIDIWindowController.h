@class CABTLEMIDIImpl;

@interface CABTLEMIDIWindowController : NSWindowController {
    CABTLEMIDIImpl *_impl;
}

- (void)windowDidLoad;
- (id)windowNibName;
- (id)initWithWindow:(id)a0;
- (void)awakeFromNib;

@end
