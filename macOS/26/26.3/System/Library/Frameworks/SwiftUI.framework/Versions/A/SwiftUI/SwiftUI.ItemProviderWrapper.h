@interface SwiftUI.ItemProviderWrapper : NSObject <NSPasteboardWriting_Private> {
    void /* unknown type, empty encoding */ itemProvider;
}

- (id)init;
- (void).cxx_destruct;
- (void)_pasteboardPropertyListForType:(id)a0 completionHandler:(id /* block */)a1;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;

@end
