@class NSThread, CoreThemeDocument;

@interface TDThreadMOCOrganizer : NSObject {
    NSThread *mainThread;
    CoreThemeDocument *document;
}

- (id)init;
- (id)mainThread;
- (id)document;
- (id)initWithDocument:(id)a0 mainThread:(id)a1;
- (id)threadMOC;
- (id)mainMOC;
- (void)setThreadMOC:(id)a0;

@end
