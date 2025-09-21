@class NSRecursiveLock, NSString, NSMutableDictionary, MPLayerGroup, NSUndoManager, NSLock, NSURL;

@interface MPDocumentInternal : NSObject

@property (retain, nonatomic) NSString *lastRandomTransition;
@property (retain, nonatomic) NSMutableDictionary *orderedRandomTransitions;
@property (retain, nonatomic) NSRecursiveLock *propertiesLock;
@property (retain, nonatomic) MPLayerGroup *documentLayerGroup;
@property (nonatomic) char savesPathsAsAbsolute;
@property (nonatomic) char assetLogging;
@property (retain, nonatomic) NSMutableDictionary *cachedAbsolutePaths;
@property (retain, nonatomic) NSMutableDictionary *cachedAbsoluteStillPaths;
@property (retain, nonatomic) NSLock *cachedPathLock;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (nonatomic) long long batchModifyCount;
@property (nonatomic) char isInBatchModify;
@property (nonatomic) char needsActionConfigure;
@property (retain, nonatomic) NSMutableDictionary *cachedActionableLayers;
@property (retain, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) char cacheAbsolutePathOverride;
@property (nonatomic) char alwaysLookupAbsolutePaths;

- (void)dealloc;

@end
