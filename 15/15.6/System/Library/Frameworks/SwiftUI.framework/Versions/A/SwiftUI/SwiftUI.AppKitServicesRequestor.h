@class NSArray;

@interface SwiftUI.AppKitServicesRequestor : NSObject <NSServicesRequestor> {
    void /* unknown type, empty encoding */ serviceItem;
}

@property (nonatomic, readonly) NSArray *selectionItems;
@property (nonatomic, readonly) char canReadSelectionFromItems;

- (id)init;
- (void).cxx_destruct;
- (void)readSelectionFromItems:(id)a0;
- (char)readSelectionFromPasteboard:(id)a0;
- (char)writeSelectionToPasteboard:(id)a0 types:(id)a1;

@end
