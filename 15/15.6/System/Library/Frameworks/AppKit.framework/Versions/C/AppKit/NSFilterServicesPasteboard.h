@class NSData, NSString, NSPasteboard;

@interface NSFilterServicesPasteboard : NSPasteboard {
    NSData *_data;
    NSString *_type;
    NSPasteboard *_pb;
}

+ (id)filterPasteboardWithPasteboard:(id)a0;
+ (char)_usesUTIsOnly;
+ (id)filterPasteboardWithData:(id)a0 ofType:(id)a1;

- (void)dealloc;
- (long long)changeCount;
- (id)types;
- (id)pasteboardItems;
- (long long)addTypes:(id)a0 owner:(id)a1;
- (void)_clearOutstandingPromises;
- (id)_dataForType:(id)a0 securityScoped:(char)a1;
- (char)canReadItemWithDataConformingToTypes:(id)a0;
- (char)canReadObjectForClasses:(id)a0 options:(id)a1;
- (long long)clearContents;
- (id)dataForType:(id)a0;
- (long long)declareTypes:(id)a0 owner:(id)a1;
- (unsigned long long)indexOfPasteboardItem:(id)a0;
- (id)readObjectsForClasses:(id)a0 options:(id)a1;
- (char)setData:(id)a0 forType:(id)a1;
- (char)writeObjects:(id)a0;

@end
