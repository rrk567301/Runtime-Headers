@class NSString;

@interface IMAPFetchDataItem : NSObject

@property (copy, nonatomic) NSString *commandString;

+ (id)UIDDataItem;
+ (id)appleRemoteLinksDataItem;
+ (id)bodyStructureDataItem;
+ (id)flagsDataItem;
+ (id)gmailLabelsDataItem;
+ (id)internalDateDataItem;
+ (id)modificationSequenceDataItem;
+ (id)sizeDataItem;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
