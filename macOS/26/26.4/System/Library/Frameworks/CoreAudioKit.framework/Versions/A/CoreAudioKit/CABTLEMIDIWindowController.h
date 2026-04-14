@class CABTLEMIDIImpl;

@interface CABTLEMIDIWindowController : NSWindowController {
    CABTLEMIDIImpl *_impl;
}

- (void)windowDidLoad;
- (id)initWithWindow:(id)a0;
- (id)windowNibName;
- (void)awakeFromNib;

@end
