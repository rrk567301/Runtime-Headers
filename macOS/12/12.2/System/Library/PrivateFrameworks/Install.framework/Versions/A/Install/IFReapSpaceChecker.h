@interface IFReapSpaceChecker : NSObject

- (BOOL)willBlock;
- (id)reapableSpace;
- (id)reapableFiles;

@end
