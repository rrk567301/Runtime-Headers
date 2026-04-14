@interface SwiftUI.NSPasteboardWritingUnion : NSObject <NSPasteboardWriting> {
    void /* unknown type, empty encoding */ items;
}

- (void).cxx_destruct;
- (id)init;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;

@end
