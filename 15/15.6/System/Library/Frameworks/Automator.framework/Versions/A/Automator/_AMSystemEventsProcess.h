@class NSString;

@interface _AMSystemEventsProcess : _AMSystemEventsUIElement

@property (readonly) char acceptsHighLevelEvents;
@property (readonly) char acceptsRemoteEvents;
@property (readonly, copy) NSString *architecture;
@property (readonly) char backgroundOnly;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) char Classic;
@property (readonly, copy) NSString *creatorType;
@property (readonly, copy) NSString *displayedName;
@property (readonly, copy) id file;
@property (readonly, copy) NSString *fileType;
@property char frontmost;
@property (readonly) char hasScriptingTerminology;
@property (readonly, copy) NSString *name;
@property (readonly) long long partitionSpaceUsed;
@property (readonly, copy) id shortName;
@property (readonly) long long totalPartitionSize;
@property (readonly) long long unixId;
@property char visible;

- (id)windows;
- (long long)id;
- (id)menuBars;

@end
