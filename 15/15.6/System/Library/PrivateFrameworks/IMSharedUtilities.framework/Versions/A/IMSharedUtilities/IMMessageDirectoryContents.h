@class NSArray, IMDirectoryContents, IMCombinedDirectoryContents;

@interface IMMessageDirectoryContents : NSObject

@property (readonly, nonatomic) NSArray *directoryContents;
@property (readonly, nonatomic) IMDirectoryContents *messagesDirectoryContents;
@property (readonly, nonatomic) IMDirectoryContents *metaDataDirectoryContents;
@property (readonly, nonatomic) IMCombinedDirectoryContents *allDirectoryContents;
@property (nonatomic) char needsGathering;

- (id)init;
- (void).cxx_destruct;
- (void)gather;
- (char)gatherIfNeeded;

@end
