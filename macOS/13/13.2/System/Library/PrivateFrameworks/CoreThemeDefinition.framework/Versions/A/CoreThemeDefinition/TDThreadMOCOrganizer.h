@class NSThread, CoreThemeDocument;

@interface TDThreadMOCOrganizer : NSObject {
    NSThread *mainThread;
    CoreThemeDocument *document;
}

- (id)init;
- (id)mainThread;
- (id)document;
- (void)setThreadMOC:(id)a0;
- (id)mainMOC;
- (id)threadMOC;
- (id)initWithDocument:(id)a0 mainThread:(id)a1;

@end
