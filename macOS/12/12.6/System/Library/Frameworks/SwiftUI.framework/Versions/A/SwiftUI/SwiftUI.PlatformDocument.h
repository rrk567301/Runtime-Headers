@class NSArray, NSURL;

@interface SwiftUI.PlatformDocument : NSDocument {
    void /* unknown type, empty encoding */ documentBox;
    void /* unknown type, empty encoding */ isLockedObservation;
    void /* unknown type, empty encoding */ sceneItemID;
}

@property (class, nonatomic, readonly) id typeErasedFormula;
@property (class, nonatomic, readonly) NSArray *readableTypes;
@property (class, nonatomic, readonly) NSArray *writableTypes;
@property (class, nonatomic, readonly) BOOL autosavesInPlace;

@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, readonly) BOOL entireFileLoaded;

+ (BOOL)isNativeType:(id)a0;
+ (BOOL)canConcurrentlyReadDocumentsOfType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)makeWindowControllers;
- (BOOL)isEntireFileLoaded;
- (BOOL)readFromFileWrapper:(id)a0 ofType:(id)a1 error:(id *)a2;
- (id)fileWrapperOfType:(id)a0 error:(id *)a1;
- (BOOL)canAsynchronouslyWriteToURL:(id)a0 ofType:(id)a1 forSaveOperation:(unsigned long long)a2;

@end
