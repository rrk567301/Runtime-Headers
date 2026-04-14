@interface SwiftUI.ItemProviderWrapper : NSObject <NSPasteboardWriting_Private> {
    void /* unknown type, empty encoding */ itemProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)_pasteboardPropertyListForType:(id)a0 completionHandler:(id /* block */)a1;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;

@end
