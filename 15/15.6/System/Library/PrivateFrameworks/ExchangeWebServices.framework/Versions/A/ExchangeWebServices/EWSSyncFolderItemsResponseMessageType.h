@class NSString, NSArray;

@interface EWSSyncFolderItemsResponseMessageType : EWSResponseMessageType

@property (copy, nonatomic) NSString *SyncState;
@property (nonatomic) char IncludesLastItemInRange;
@property (copy, nonatomic) NSArray *Changes;

+ (id)definition;

- (void).cxx_destruct;

@end
