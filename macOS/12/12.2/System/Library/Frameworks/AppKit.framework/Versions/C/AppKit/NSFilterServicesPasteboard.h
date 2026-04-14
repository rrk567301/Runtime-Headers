@class NSData, NSString, NSPasteboard;

@interface NSFilterServicesPasteboard : NSPasteboard {
    NSData *_data;
    NSString *_type;
    NSPasteboard *_pb;
}

+ (BOOL)_usesUTIsOnly;
+ (id)filterPasteboardWithData:(id)a0 ofType:(id)a1;
+ (id)filterPasteboardWithPasteboard:(id)a0;

- (void)dealloc;
- (long long)changeCount;
- (id)types;
- (long long)declareTypes:(id)a0 owner:(id)a1;
- (id)dataForType:(id)a0;
- (BOOL)setData:(id)a0 forType:(id)a1;
- (id)readObjectsForClasses:(id)a0 options:(id)a1;
- (long long)clearContents;
- (BOOL)writeObjects:(id)a0;
- (long long)addTypes:(id)a0 owner:(id)a1;
- (id)pasteboardItems;
- (void)_clearOutstandingPromises;
- (id)_dataForType:(id)a0 securityScoped:(BOOL)a1;
- (unsigned long long)indexOfPasteboardItem:(id)a0;
- (BOOL)canReadItemWithDataConformingToTypes:(id)a0;
- (BOOL)canReadObjectForClasses:(id)a0 options:(id)a1;

@end
