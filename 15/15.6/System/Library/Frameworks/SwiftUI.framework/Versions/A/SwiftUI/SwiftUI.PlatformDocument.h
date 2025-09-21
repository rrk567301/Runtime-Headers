@class NSArray, NSURL;

@interface SwiftUI.PlatformDocument : NSDocument {
    void /* unknown type, empty encoding */ documentBox;
    void /* unknown type, empty encoding */ isLockedObservation;
    void /* unknown type, empty encoding */ sceneItemID;
}

@property (class, nonatomic, readonly) id typeErasedFormula;
@property (class, nonatomic, readonly) NSArray *readableTypes;
@property (class, nonatomic, readonly) NSArray *writableTypes;
@property (class, nonatomic, readonly) char autosavesInPlace;

@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, readonly) char entireFileLoaded;

+ (char)canConcurrentlyReadDocumentsOfType:(id)a0;
+ (char)isNativeType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)canAsynchronouslyWriteToURL:(id)a0 ofType:(id)a1 forSaveOperation:(unsigned long long)a2;
- (char)isEntireFileLoaded;
- (void)makeWindowControllers;
- (void)willCreateNewDocument;

@end
